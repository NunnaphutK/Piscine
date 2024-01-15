/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:54:33 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/27 16:16:36 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		i *= nb;
		nb -= 1;
	}
	return (i);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d",ft_iterative_factorial(5));
}*/
