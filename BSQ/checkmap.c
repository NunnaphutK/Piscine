/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 03:39:23 by nkiticha          #+#    #+#             */
/*   Updated: 2023/08/02 17:41:33 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	cline(char *arr, char c[3])
{
	int	i;

	i = -1;
	while (arr[++i] != '\n')
		if (arr[i] != c[0] && arr[i] != c[1])
			return (0);
	return (1);
}

char	**ft_malloc(int num, char c[3])
{
	char	**arr;
	int		i;
	ssize_t	rsize;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * num);
	arr[0] = (char *)malloc(sizeof(char) * 2147483647);
	rsize = read(0, arr[0], 2147483647);
	if (cline(arr[0], c) == 0)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	while (++i != num)
	{
		arr[i] = (char *)malloc(sizeof(char) * rsize);
		rsize = read(0, arr[i], rsize);
		if (rsize != len(arr[i - 1]) + 1 || cline(arr[i], c) == 0)
		{
			write(1, "map error\n", 10);
			return (0);
		}
	}
	return (arr);
}
