/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:18:36 by marferre          #+#    #+#             */
/*   Updated: 2022/08/15 12:37:52 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;

	cont = 0;
	while (cont < (size / 2))
	{
		ft_swap(&tab[cont], &tab[size - cont - 1]);
		cont++;
	}
}
