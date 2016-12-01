/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaziza <mhaziza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:10:38 by mhaziza           #+#    #+#             */
/*   Updated: 2016/11/17 10:10:52 by mhaziza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (min < max)
	{
		tab = malloc(sizeof(int) * (max - min));
		if (!tab)
			return (0);
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		return (tab);
	}
	else
		return (0);
}
