/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:04:49 by marferre          #+#    #+#             */
/*   Updated: 2022/08/17 17:54:28 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		++i;
	}
	return (str);
}

/*
int main(void)
{
	char a[5];

	a[0] = 'l';
	a[1] = 'a';
	a[2] = 'L';
	a[3] = 'a';
	a[4] = '\0';
	ft_strupcase(a);
	printf("%s", a);
}
*/