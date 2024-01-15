/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:36:59 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/27 21:19:40 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (power > 0)
	{
		i *= nb;
		power --;
	}
	return (i);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_iterative_power(-5,3));
	printf("%d\n",ft_iterative_power(2,4));
	printf("%d\n",ft_iterative_power(-5,0));
	printf("%d\n",ft_iterative_power(-5,1));
	printf("%d\n",ft_iterative_power(0,0));
}*/
