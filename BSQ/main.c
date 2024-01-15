/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 01:30:11 by nkiticha          #+#    #+#             */
/*   Updated: 2023/08/02 17:33:36 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	**argc_one(void)
{
	char	str[24];
	char	c[3];
	char	**arr;
	int		n[2];
	int		min;

	readfile(str, c);
	if (checkerror(str, c) == 0)
		return (0);
	n[0] = isnum(str);
	arr = ft_malloc(n[0], c);
	n[1] = len(arr[1]);
	if (n[0] < n[1])
		min = n[0];
	else
		min = n[1];
	re_arr(arr, solve(arr, n, c[1], min), c[2]);
	ft_print(arr, n[0], n[1]);
	free(arr);
	return (arr);
}

char	**argc_more(int argc, char **argv)
{
	char	*head;
	char	**arr;
	char	c[3];
	int		fd[2];
	int		i;

	i = 0;
	while (++i < argc)
	{
		fd[0] = open(argv[i], O_RDONLY);
		fd[1] = open(argv[i], O_RDONLY);
		if (fd[0] == -1 || fd[1] == -1)
			write(1, "map error\n", 10);
		head = fd_head(fd[0], fd[1], c);
		arr = ft_rmalloc(fd[1], isnum(head), c);
		show(arr, isnum(head), len(arr[1]), c);
		free(arr);
		close(fd[0]);
		close(fd[1]);
	}
	return (arr);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		argc_one();
	else
		argc_more(argc, argv);
}
