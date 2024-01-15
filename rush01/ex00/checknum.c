/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checknum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:26:48 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/23 22:36:44 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	colup(char *check, int num[4][4]);
int	coldown(char *check, int num[4][4]);
int	rowleft(char *check, int num[4][4]);
int	rowright(char *check, int num[4][4]);

void	print(int table[4][4])
{
	int	a[3];

	a[0] = -1;
	while (++a[0] != 4)
	{
		a[1] = -1;
		while (++a[1] != 4)
		{
			table[a[0]][a[1]] += 48;
			write(1, &table[a[0]][a[1]], 1);
			if (a[1] != 3)
				write(1, " ", 1);
			table[a[0]][a[1]] -= 48;
		}
		write(1, "\n", 1);
	}
}

void	createtable(int table[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			table[i][j] = 0;
			j ++;
		}
		i ++;
	}
}

int	checknum(int table[4][4], int x, int y, int num)
{
	int	i;

	i = -1;
	while (++i != 4)
	{
		if (table[x][i] == num)
			return (0);
		if (table[i][y] == num)
			return (0);
	}
	return (1);
}

void	checkprint(char *check, int table[4][4], int *n)
{
	if (colup(check, table) == 1 && coldown(check, table) == 1)
	{
		if (rowleft(check, table) == 1 && rowright(check, table) == 1)
		{
			print(table);
			*n = 1;
		}
	}
}

void	ans(int table[4][4], char *check, int *n)
{
	int	a[3];

	a[0] = -1;
	while (++a[0] != 4)
	{
		a[1] = -1;
		while (++a[1] != 4)
		{
			if (table[a[0]][a[1]] == 0)
			{
				a[2] = 0;
				while (++a[2] != 5)
				{
					if (checknum(table, a[0], a[1], a[2]))
					{
						table[a[0]][a[1]] = a[2];
						ans(table, check, n);
						table[a[0]][a[1]] = 0;
					}
				}
				return ;
			}
		}
	}
	checkprint(check, table, n);
}
