/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:45:11 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/16 18:47:48 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstrow(int x)
{
	int	i;

	i = 1;
	ft_putchar('/');
	while (i < x - 1)
	{
		ft_putchar('*');
		i += 1;
	}
	if (x != 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_nextrow(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j < y - 1)
	{
		ft_putchar('*');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i += 1;
		}
		if (x != 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		j += 1;
	}
}

void	ft_lastrow(int x)
{
	int	i;

	i = 1;
	ft_putchar('\\');
	while (i < x - 1)
	{
		ft_putchar('*');
		i += 1;
	}
	if (x != 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "please enter the new number", 28);
	}
	else
	{
		ft_firstrow(x);
		if (y != 1)
		{
			ft_nextrow(x, y);
			ft_lastrow(x);
		}
	}
}
