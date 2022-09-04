/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:13:11 by marferre          #+#    #+#             */
/*   Updated: 2022/08/29 11:11:05 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		a;
	int		b;
	char	**tab;

	i = 0;
	while (str[i] != '\0')
	{
		if ((charset[i] != '\0' && str[i] != '\0') && charset[i] == str[i])
			i++;
		else if (str[i] != '\0')
			tab[a][b] = str[i];
	}
}
