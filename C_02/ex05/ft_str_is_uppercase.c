/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:36:11 by marferre          #+#    #+#             */
/*   Updated: 2022/08/16 13:32:18 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}

/*
int main(void)
{
	int a;

	a = ft_str_is_uppercase("");
	printf("%d", a);
}
*/