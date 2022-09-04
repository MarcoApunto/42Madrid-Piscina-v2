/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:20:58 by marferre          #+#    #+#             */
/*   Updated: 2022/08/25 13:33:15 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		a;

	str = malloc(sizeof(strs));
	if (str == NULL)
		return (0);
	i = -1;
	a = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
		{
			str[a++] = strs[i][j];
		}
		j = -1;
		while (sep[++j] != '\0' && i < size - 1)
		{
			str[a++] = sep[j];
		}
	}
	str[a] = '\0';
	return (str);
}

/*
int main(void)
{
	char *a[3] = {"hola", "muy", "buenas"};

	printf("%s", ft_strjoin(3, a, "_"));
}
*/