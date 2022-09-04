/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:13:37 by marferre          #+#    #+#             */
/*   Updated: 2022/08/16 13:32:32 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32)
			return (0);
		str++;
	}
	return (1);
}

/*
int main(void)
{
	int a;

	a = ft_str_is_printable("24");
	printf("%d", a);
}
*/