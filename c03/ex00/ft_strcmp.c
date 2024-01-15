/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:37:07 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 20:50:14 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main(void)
{
        char str1[]    = "Hello";
        char str2[]    = "World";

    printf("ft_strcmp: %d ", ft_strcmp(str1, str2));
}*/
