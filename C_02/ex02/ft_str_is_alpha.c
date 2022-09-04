/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:17:22 by marferre          #+#    #+#             */
/*   Updated: 2022/08/16 13:31:30 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 65) || (*str > 90 && *str < 97) || (*str > 122))
			return (0);
		str++;
	}
	return (1);
}

/*
int main(void)
{
	int a;

	a = ft_str_is_alpha("hola");
	printf("%d", a);
}
*/