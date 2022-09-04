/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:27:41 by marferre          #+#    #+#             */
/*   Updated: 2022/08/17 19:12:11 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (src[c] != '\0')
		c++;
	if (c > 0)
	{
		while (src[d] != '\0' && size > (c - 1))
		{
			dest[d] = src[d];
			d++;
		}
		dest[d] = '\0';
	}
	return (d);
}

/*
int	main(void)
{
	char	a[4];

	ft_strlcpy(a, "Prueba", 4);
	printf("%s", a);
	strlcpy(a, "Prueba", 4);
	printf("%s", a);
}
*/