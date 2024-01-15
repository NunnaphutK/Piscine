/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:14:55 by chayeema          #+#    #+#             */
/*   Updated: 2023/07/23 22:24:16 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//up to down
int	colup(char *check, int num[4][4])
{
	int	i;
	int	j;
	int	colup;
	int	count;

	j = -1;
	while (++j < 4)
	{
		i = -1;
		colup = 0;
		count = 0;
		while (++i < 4)
		{
			if (colup < num[i][j])
			{
				colup = num[i][j];
				count++;
			}
		}
		if (count + '0' != check[j])
			return (0);
	}
	return (1);
}

//down to up
int	coldown(char *check, int num[4][4])
{
	int	i;
	int	j;
	int	coldown;
	int	count;

	j = -1;
	while (++j < 4)
	{
		i = 4;
		coldown = 0;
		count = 0;
		while (--i > -1)
		{
			if (coldown < num[i][j])
			{
				coldown = num[i][j];
				count++;
			}
		}
		if (count + '0' != check[j + 4])
			return (0);
	}
	return (1);
}

//left to right
int	rowleft(char *check, int num[4][4])
{
	int	i;
	int	j;
	int	rowleft;
	int	count;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		rowleft = 0;
		count = 0;
		while (++j < 4)
		{
			if (rowleft < num[i][j])
			{
				rowleft = num[i][j];
				count++;
			}
		}
		if (count + '0' != check[i + 8])
			return (0);
	}
	return (1);
}

//right to left
int	rowright(char *check, int num[4][4])
{
	int	i;
	int	j;
	int	rowright;
	int	count;

	i = -1;
	while (++i < 4)
	{
		j = 4;
		rowright = 0;
		count = 0;
		while (--j > -1)
		{
			if (rowright < num[i][j])
			{
				rowright = num[i][j];
				count++;
			}
		}
		if (count + '0' != check[i + 12])
			return (0);
	}
	return (1);
}
