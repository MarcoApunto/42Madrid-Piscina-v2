/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:23:15 by marferre          #+#    #+#             */
/*   Updated: 2022/08/28 16:35:22 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (0);
	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stonks;

	i = 0;
	stonks = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stonks == NULL)
		return (0);
	while (i < ac)
	{
		stonks[i].copy = ft_strdup(av[i]);
		stonks[i].size = ft_strlen(av[i]);
		stonks[i].str = av[i];
		i++;
	}
	stonks[i].str = 0;
	stonks[i].size = 0;
	stonks[i].copy = 0;
	return (stonks);
}
// el main se transformará en la funcción dell ejercicio posterior
/*int main (int ac, char **av)
{
	t_stock_str *algo;

	algo = ft_strs_to_tab(ac - 1, av + 1);
	for (int i = 0; i < ac - 1; i++)
		printf("%d\n%s\n%s\n", algo[i].size, algo[i].str, algo[i].copy);
	
}*/
