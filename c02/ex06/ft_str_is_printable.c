/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:16:12 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 14:18:04 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 32 || c > '~')
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
    printf("%d",ft_str_is_numeric("i=wj930385h94395"));
    printf("%d",ft_str_is_numeric("29348586~2okse-18"));
    printf("%d",ft_str_is_numeric("23abcdefghijkl"));
}*/
