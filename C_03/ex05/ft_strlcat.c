/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:04:47 by marferre          #+#    #+#             */
/*   Updated: 2022/08/18 18:29:18 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		str++;
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	ldest;
	unsigned int	lsrc;

	c = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size < (ldest + 1))
		return (lsrc + size);
	while ((src[c] != '\0') && (c < (size - ldest - 1)))
	{
		dest[c + ldest] = src[c];
		c++;
	}
	dest[c + ldest] = '\0';
	return (lsrc + ldest);
}

/*
int main(void)
{
	char a[50] = "Que pasa ";
	unsigned int	c;

	c = ft_strlcat(a, "Hola buenas", 9);
	printf("%s\n", a);
	c = strlcat(a, "Hola buenas", 12);
	printf("%s", a);	
}
*/