/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:49:56 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/31 21:12:26 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	i = max - min;
	arr = (int *)malloc(sizeof(int) * i);
	while (--i > -1)
		arr[i] = min + i;
	return (arr);
}
