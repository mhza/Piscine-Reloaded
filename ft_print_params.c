/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaziza <mhaziza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:05:10 by mhaziza           #+#    #+#             */
/*   Updated: 2016/11/17 15:26:45 by mhaziza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (str && str[0])
	{
		ft_putchar(str[0]);
		ft_putstr(str + 1);
	}
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putstr("\n");
		}
		ft_putstr(av[ac]);
	}
	return (0);
}
