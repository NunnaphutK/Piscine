/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:13:38 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/31 21:47:26 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	*range = (int *)malloc(sizeof(int) * i);
	if (*range == 0)
		return (-1);
	while (--i > -1)
		(*range)[i] = min + i;
	return (max - min);
}
