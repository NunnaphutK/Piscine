/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:11:35 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/13 20:41:58 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n ++;
	}
}

/*int main(void)
{
	ft_print_numbers();
}*/
