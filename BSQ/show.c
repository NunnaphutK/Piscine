/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:48:24 by nkiticha          #+#    #+#             */
/*   Updated: 2023/08/02 17:07:14 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_print(char **s, int x, int y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < x)
	{
		j = -1;
		while (++j < y + 1)
			write(1, &s[i][j], 1);
	}
}

void	show(char **arr, int x, int y, char c[3])
{
	int	n[2];
	int	min;

	n[0] = x;
	n[1] = y;
	if (n[0] < n[1])
		min = n[0];
	else
		min = n[1];
	re_arr(arr, solve(arr, n, c[1], min), c[2]);
	ft_print(arr, n[0], n[1]);
}
