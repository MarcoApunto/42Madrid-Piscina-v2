/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:43:35 by marferre          #+#    #+#             */
/*   Updated: 2022/08/10 20:58:09 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = 0;
	while (a[0] < 99)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			ft_putchar((a[0] / 10) + '0');
			ft_putchar((a[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((a[1] / 10) + '0');
			ft_putchar((a[1] % 10) + '0');
			if (!(a[0] == 98 && a[1] == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			a[1]++;
		}
		a[0]++;
	}
}
