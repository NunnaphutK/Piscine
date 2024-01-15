/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahoran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 01:28:19 by kmahoran          #+#    #+#             */
/*   Updated: 2023/08/02 17:39:22 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	re_arr(char **arr, int x[3], char c)
{
	int	i[2];
	int	a;
	int	b;

	i[0] = -1;
	while (++i[0] < x[2])
	{
		i[1] = -1;
		while (++i[1] < x[2])
		{
			a = x[0] + i[0];
			b = x[1] + i[1];
			if (arr[a][b] != '\n')
				arr[a][b] = c;
		}
	}
}

int	check(char **a, int p[4], char e, int n)
{
	int	i;
	int	j;

	i = -1;
	while ((++i) + p[0] < p[2] && i < n)
	{
		j = -1;
		while ((++j) + p[1] < p[3] && j < n)
			if (a[i + p[0]][j + p[1]] == e)
				return (0);
	}
	return (1);
}

int	*solve(char **a, int xy[2], char e, int n)
{
	int		*z;
	int		i[4];

	i[2] = xy[0];
	i[3] = xy[1];
	z = (int *)malloc(sizeof(int) * 3);
	z[0] = -1;
	i[0] = -1;
	while (++i[0] < xy[0] - n + 1)
	{
		i[1] = -1;
		while (++i[1] < xy[1] - n + 1)
		{
			if (check(a, i, e, n) && n > 0)
			{
				z[0] = i[0];
				z[1] = i[1];
				z[2] = n;
				return (z);
			}
		}
	}
	if (n > 1 && z[0] == -1)
		z = solve(a, xy, e, n - 1);
	return (z);
}
