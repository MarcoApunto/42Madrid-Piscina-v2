/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:18:21 by marferre          #+#    #+#             */
/*   Updated: 2022/08/17 00:15:48 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] != '\0' && s2[c] != '\0') && (s1[c] == s2[c]))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

/*
int	main(void)
{
	char a[] = "Hola muy buenas";
	char b[] = "hola muuy buenas";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d", strcmp(a, b));
}
*/