/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:34:09 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/23 22:19:06 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	createtable(int table[4][4]);
void	ans(int table[4][4], char *check, int *n);

int	ft_check(char *str, int *n, char *clstr)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			*clstr = str[i];
			clstr ++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				cnt ++;
		}
		i ++;
	}
	*n = i;
	*clstr = '\0';
	return (cnt);
}

int	main(int argc, char **argv)
{
	char	arr[17];
	int		table[4][4];
	int		slen;
	int		n;

	n = 0;
	if (argc == 2)
	{
		if (ft_check(argv[1], &slen, arr) != 16 || slen != 31)
		{
			write(1, "Error\n", 6);
		}
		else
		{
			createtable(table);
			ans(table, arr, &n);
			if (n == 0)
				write(1, "Error\n", 6);
		}
	}
	else
		write(1, "Error\n", 6);
}
