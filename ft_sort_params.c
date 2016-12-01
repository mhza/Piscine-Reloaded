/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaziza <mhaziza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:06:27 by mhaziza           #+#    #+#             */
/*   Updated: 2016/11/17 15:30:47 by mhaziza          ###   ########.fr       */
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

void	ft_println_tab(char **tab)
{
	if (tab && tab[0])
	{
		ft_putstr(tab[0]);
		ft_putstr("\n");
		ft_println_tab(tab + 1);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	if (s1 && s2)
	{
		if ((s1[0] || s2[0]) && s1[0] != s2[0])
			return (s1[0] - s2[0]);
		if (s1[0] && s1[0] == s2[0])
			return (ft_strcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

char	**ft_sort_tab(char **tab, int size)
{
	int		i;
	int		is_sort;
	char	*tmp;

	if (tab && size > 1)
	{
		is_sort = 0;
		while (!is_sort)
		{
			is_sort = 1;
			i = -1;
			while (++i < size - 1)
			{
				if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				{
					tmp = tab[i];
					tab[i] = tab[i + 1];
					tab[i + 1] = tmp;
					is_sort = 0;
				}
			}
			size--;
		}
	}
	return (tab);
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 0;
		av = ft_sort_tab(av + 1, ac - 1);
		while (++i < ac)
		{
			ft_putstr(av[i]);
			ft_putstr("\n");
		}
		ft_putstr(av[ac]);
	}
	return (0);
}
