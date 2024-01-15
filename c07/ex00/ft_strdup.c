/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:14:55 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/31 21:04:01 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len ++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	dest[len] = '\0';
	while (--len > -1)
		dest[len] = src[len];
	return (dest);
}
