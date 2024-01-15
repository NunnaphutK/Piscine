/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 01:31:24 by nkiticha          #+#    #+#             */
/*   Updated: 2023/08/02 04:04:16 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int	isnum(char *str)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num);
}

void	readfile(char *str, char c[3])
{
	int		i;

	i = -1;
	read(0, str, sizeof(str));
	while (++i < 3)
		c[2 - i] = str[len(str) - 1 - i];
	str[len(str) - i] = '\0';
}

int	checkerror(char *str, char *c)
{
	if (isnum(str) == 0)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	else if (c[0] == c[1] || c[0] == c[2] || c[1] == c[2])
	{
		write(1, "map error\n", 10);
		return (0);
	}
	return (1);
}
