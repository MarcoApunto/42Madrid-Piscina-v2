/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:42:51 by marferre          #+#    #+#             */
/*   Updated: 2022/08/18 18:25:27 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while ((s1[c] != '\0' && s2[c] != '\0') \
			&& (s1[c] == s2[c]) && (c < (n - 1)))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

/*
int	main(void)
{
	char a[] = "Hola mmmuy buena";
	char b[] = "Hola mmuy buenas";
	unsigned int s = 9;

	printf("%d", ft_strncmp(a, b, s));
	printf("\n");
	printf("%d", strncmp(a, b, s));
}
*/