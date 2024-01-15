/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:45:26 by nkiticha          #+#    #+#             */
/*   Updated: 2023/08/02 17:28:21 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	split(char *str, char c[3])
{
	int		i;

	i = -1;
	while (++i < 3)
		c[2 - i] = str[len(str) - 1 - i];
	str[len(str) - i] = '\0';
}

int	in_zero(char *arr, int fd)
{
	int	i;

	i = 0;
	while (i > -1)
	{
		read(fd, &arr[i], 1);
		if (arr[i] == '\n')
			break ;
		else
			i++;
	}
	return (i);
}

char	**ft_rmalloc(int fd, int num, char c[3])
{
	char	**arr;
	int		i;
	ssize_t	rsize;
	int		n;

	arr = (char **)malloc(sizeof(char *) * num);
	arr[0] = (char *)malloc(sizeof(char) * 2147483647);
	n = in_zero(arr[0], fd);
	if (cline(arr[0], c) == 0)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	i = 0;
	while (++i != num)
	{
		arr[i] = (char *)malloc(n);
		rsize = read(fd, arr[i], n + 1);
		if (rsize != len(arr[i - 1]) + 1 || cline(arr[i], c) == 0)
		{
			write(1, "map error\n", 10);
			return (0);
		}
	}
	return (arr);
}

int	fd_cnt(int fd, int n[2])
{
	char	str;
	int		i;
	ssize_t	cnt;

	cnt = -1;
	i = -1;
	while (cnt != 0 && ++i > -1)
	{
		cnt = read(fd, &str, 1);
		if (str == '\n' && n[0] == 0)
		{
			n[0] = 1;
			n[1] = i;
		}
		if (cnt == 0)
			break ;
		if (cnt == -1)
		{
			write(1, "map error\n", 10);
			return (0);
		}
	}
	return (i);
}

char	*fd_head(int fd, int fd_rd, char c[3])
{
	char	*head;
	int		n[2];
	int		cnt;

	n[0] = 0;
	cnt = fd_cnt(fd, n);
	if (cnt < 1)
		return (0);
	head = (char *)malloc(n[1] + 1);
	read(fd_rd, head, n[1] + 1);
	split(head, c);
	return (head);
}
