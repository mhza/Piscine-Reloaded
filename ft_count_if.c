/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaziza <mhaziza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:16:54 by mhaziza           #+#    #+#             */
/*   Updated: 2016/11/17 10:17:27 by mhaziza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(char **tab, int (*f)(char*), int count)
{
	if (!tab[0])
		return (count);
	else if (f(tab[0]) == 1)
		return (ft_count(tab + 1, f, count + 1));
	else
		return (ft_count(tab + 1, f, count));
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	if (tab && f)
		return (ft_count(tab, f, 0));
	else
		return (0);
}
