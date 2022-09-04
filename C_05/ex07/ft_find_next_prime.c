/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:31:32 by marferre          #+#    #+#             */
/*   Updated: 2022/08/25 11:13:03 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (2 > nb)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (nb == 2147483647)
		return (nb);
	while (ft_is_prime(nb) == 0 && nb < 2147483647)
		nb++;
	return (nb);
}

/*
int	main (void)
{
	printf("%d", ft_find_next_prime(2147483646));
}
*/
