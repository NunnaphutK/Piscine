/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:30:34 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 15:20:45 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 'a' && c <= 'z')
		{
			*(str + i) -= 32;
		}
		i ++;
	}
	return (str);
}

/*#include <stdio.h>
int main(void)
{
    char    str[] = "String Wowwow";
    printf("%s", ft_strupcase(str));
}*/
