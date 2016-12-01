/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaziza <mhaziza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 09:58:51 by mhaziza           #+#    #+#             */
/*   Updated: 2016/11/17 09:58:59 by mhaziza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb > 0 && nb < 13)
	{
		factorial = nb;
		while (nb-- > 1)
			factorial = factorial * nb;
		return (factorial);
	}
	if (nb == 0)
		return (1);
	return (0);
}
