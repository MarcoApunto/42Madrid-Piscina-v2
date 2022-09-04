/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:05:06 by marferre          #+#    #+#             */
/*   Updated: 2022/08/25 13:39:14 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	subtraction;
	int	*result;

	if (min >= max)
		return (0);
	subtraction = (long int)max - (long int)min;
	result = malloc(sizeof(int) * subtraction);
	if (result == NULL)
		return (0);
	i = -1;
	while (++i < subtraction)
		result[i] = (long int)min + i;
	return (result);
}

/*
#include <stdio.h>

int	*ft_range(int min, int max)

int	main(void)
{
	int *result;
	int i;
	
	i = 0;
	result = ft_range(-1, 5);
	if (result == NULL)
		printf("nulo");
	else
	{
		while (i < 6)
		{
			printf("%d", result[i]);
			if (i != 5)
				printf(" ");
			i++;
		}
	}
	free(result);
}
*/