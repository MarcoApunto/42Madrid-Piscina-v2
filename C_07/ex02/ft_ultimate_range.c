/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:05:19 by marferre          #+#    #+#             */
/*   Updated: 2022/08/29 11:55:06 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	subtraction;
	int	*result;
	int	i;

	subtraction = (long int)max - (long int)min;
	if (subtraction <= 0)
	{
		*range = NULL;
		return (0);
	}
	result = malloc(sizeof(int) * subtraction);
	if (result == NULL)
		return (0);
	i = -1;
	while (++i < subtraction)
		result[i] = (long int)min + i;
	*range = result;
	return (subtraction);
}
/*
int main()
{
	int **range;
	int i;

	range = malloc(sizeof(int*));
	i = ft_ultimate_range(range, -2147483648, 2147483647);
	printf("%d", i);
}
*/