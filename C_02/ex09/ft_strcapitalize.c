/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:12:00 by marferre          #+#    #+#             */
/*   Updated: 2022/08/17 20:21:47 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 97 && str[c] <= 122) && (i == 0))
		{
			str[c] -= 32;
			i++;
		}
		else if ((str[c] >= 65 && str[c] <= 90) && (i > 0))
		{
			str[c] += 32;
		}
		else if ((str[c] < 65 || str[c] > 90) && (str[c] < 97 || str[c] > 122) \
				&& (str[c] < '0' || str[c] > '9'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

/*
int	main(void)
{
	char a[] = "eSto es uNA-prueBa+lOKis";
	ft_strcapitalize(a);
	printf("%s", a);
}
*/