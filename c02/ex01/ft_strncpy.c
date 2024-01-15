/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:21:24 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 17:37:39 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "Text Copy Number 1";
	char str2[20];
	char str3[20];

	printf("%s",ft_strncpy(str2, str, 5));
	printf("%s",ft_strncpy(str3, str, 10));
}*/
