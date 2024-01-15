/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:21:45 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/27 22:22:38 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	x;

	if (nb < 0 && nb > -10)
		write(1, "-", 1);
	else if (nb > 9 || nb < -9)
	{
		ft_putnbr(nb / 10);
	}
	nb = nb % 10;
	if (nb < 0)
		nb = -nb; 
	x = nb + 48;
	write(1, &x, 1);
}

/*int main(void)
{
	ft_putnbr(0);
}*/
