/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaziza <mhaziza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:13:36 by mhaziza           #+#    #+#             */
/*   Updated: 2016/11/17 14:53:57 by mhaziza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 1

int	main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ac < 2)
		write(2, "File name missing.\n", 18);
	else if (ac > 2)
		write(2, "Too many argument.\n", 18);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd != -1)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
			{
				buf[ret] = '\0';
				write(1, buf, BUF_SIZE);
			}
			if (close(fd) > 0)
				return (1);
		}
	}
	return (0);
}
