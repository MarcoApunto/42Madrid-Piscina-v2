/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:37:06 by marferre          #+#    #+#             */
/*   Updated: 2022/08/18 18:27:22 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0' && (a - nb))
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
	char a[50] = "Hoy no ";
	char b[50] = "es manana";

	printf("%s\n", ft_strncat(a, b, 4));
}
*/