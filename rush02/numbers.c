/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:27:38 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/30 20:53:57 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	numbers(int nb)
{
	int	digit[32];
	int		i;

	i = 0;
	while (i <= 32)
	{
		if (i <= 20)
			digit[i] = i;
		else if (i <= 28)
			digit[i] = 10 * (i - 18);
		else
		{
			digit[29] = 1000;
			digit[30] = 1000000;
			digit[31] = 1000000000;
		}
		i++;
	}	
	return (1);
}