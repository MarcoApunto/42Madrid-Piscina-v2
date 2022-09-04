/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:27:46 by marferre          #+#    #+#             */
/*   Updated: 2022/08/27 13:23:09 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	char	*str2;
	char	*found;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			str2 = str;
			found = to_find;
			while (*str == *found)
			{
				str++;
				found++;
				if (*found == '\0')
					return (str2);
			}
			str--;
		}
		str++;
	}
	return (0);
}

/*
int main(void)
{
	char *b;
    char *c; 

    c = ft_strstr("Hola muy buenas", "muy");
    printf("%s\n", c);
	b = strstr("Hola muy buenas", "muy");
	printf("%s", b);
}
*/