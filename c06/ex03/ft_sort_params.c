/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:37:21 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/29 18:01:31 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print(int argc, char **str)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (str[j][i] != '\0')
		{
			write(1, &str[j][i], 1);
			i ++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*swap;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 0;
		}
		i ++;
	}
	ft_print(argc, argv);
}
