/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:29:12 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 11:36:06 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < '0' || c > '9')
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
    char *i = "abcdefghijkl";
    char *n = "f3uihiut4442oo";

    printf("%d",ft_str_is_numeric("0385h94395"));
    printf("%d",ft_str_is_numeric("293485868"));
    printf("%d",ft_str_is_numeric("23abcdefghijkl"));
}*/
