/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkip.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:05:33 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/30 19:04:41 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	checkinput(int argc, char **argv, int fd)
{
	int	i;

	i = 0;
	while (argv[argc - 1][i] != '\0')
	{
		if (argv[argc - 1][i] < '0' || argv[argc - 1][i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	ft_readfile(int fd)
{
	ssize_t	rfile;
	char	str;
	char	*arr;
	int		n;

	n = 0;
	rfile = read(fd, &str, sizeof(str));
	while (rfile > 0)
	{
		rfile = read(fd, &str, sizeof(str));
		n++;
	}
	arr = (char *)malloc(sizeof(char) * n);
	rfile = read(fd, &arr, sizeof(arr));
}

int	checkdict(int argc, char **argv)
{
	int	fd;

	if (argc == 2)
	{
		fd = open("numbers.dict", O_RDONLY);
		if (checkinput(argc, argv, fd) == 1)
			collectw();
	}
	else if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		if (checkinput(argc, argv, fd) == 1)
			collectw();
	}
	else
		write(1, "Error\n", 6);
	close(fd);
	return (0);
}
