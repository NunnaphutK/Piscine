/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:35:30 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 02:56:44 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	char src[] = "Good Game";
	char dest[10];
	ft_strcpy(dest,src);
	printf("%s", ft_strcpy(dest,src));
	//printf("dest %s",dest);
	//printf("src %s",src);
}*/
