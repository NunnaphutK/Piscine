/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nonirush04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivachir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:05:47 by nivachir          #+#    #+#             */
/*   Updated: 2023/07/16 18:01:23 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstrow(int x)
{
	int	i;

	i = 1;
	ft_putchar('A');
	while (i < x - 1)
	{
		ft_putchar('B');
		i += 1;
	}
	if (x != 1)
	{
		ft_putchar('C');
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
		ft_putchar('B');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i += 1;
		}
		if (x != 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j += 1;
	}
}

void	ft_lastrow(int x)
{
	int	i;

	i = 1;
	ft_putchar('C');
	while (i < x - 1)
	{
		ft_putchar('B');
		i += 1;
	}
	if (x != 1)
	{
		ft_putchar('A');
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
