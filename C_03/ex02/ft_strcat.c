/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 00:25:45 by marferre          #+#    #+#             */
/*   Updated: 2022/08/18 15:05:06 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0')
	{
		dest[b + a] = src[a];
		a++;
	}
	dest[b + a] = '\0';
	return (dest);
}

/*
int main(void)
{
	char a[50] = "esto es el inicio ";
	char b[50] = "y este el final";

	printf("%s\n", ft_strcat(a, b));
}
*/