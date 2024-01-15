/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:29:38 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/29 16:36:15 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			write(1, &argv[argc - 1][i], 1);
			i ++;
		}
		write(1, "\n", 1);
		argc--;
	}
}