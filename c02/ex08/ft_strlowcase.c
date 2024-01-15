/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:26:09 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 15:35:21 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 'A' && c <= 'Z')
		{
			*(str + i) += 32;
		}
		i ++;
	}
	return (str);
}

/*#include <stdio.h>
int main(void)
{
    char    str[] = "EVerY ThinG is LoWercaSe";
    printf("%s", ft_strupcase(str));
}*/	
