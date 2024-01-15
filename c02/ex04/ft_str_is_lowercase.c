/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:59:51 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 14:07:56 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 'a' || c > 'z')
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
    printf("%d",ft_str_is_numeric("0385h94395"));
    printf("%d",ft_str_is_numeric("aieerfmrtpoemr"));
    printf("%d",ft_str_is_numeric("i23abcdefghijkl"));
}*/
