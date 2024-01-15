/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:48:38 by nkiticha          #+#    #+#             */
/*   Updated: 2023/08/03 16:11:44 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i ++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		r;
	char	*arr;

	i = -1;
	r = 0;
	while (++i < size)
		r = r + ft_strlen(strs[i]);
	r = r + (ft_strlen(sep) * (size - 1));
	arr = (char *)malloc(sizeof(char) * (r + 1));
	arr[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i != size - 1)
			ft_strcat(arr, sep);
	}
	return (arr);
}
