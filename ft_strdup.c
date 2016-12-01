/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaziza <mhaziza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:09:09 by mhaziza           #+#    #+#             */
/*   Updated: 2016/11/17 14:55:12 by mhaziza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	if (src)
	{
		i = 0;
		while (src[i])
			i++;
		dup = (char*)malloc(sizeof(char) * i);
		if (!dup)
			return (0);
		i = 0;
		while (src[i])
		{
			if (!dup)
				return (0);
			dup[i] = src[i];
			i++;
		}
		dup[i] = 0;
		return (dup);
	}
	return (0);
}
