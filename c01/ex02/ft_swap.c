/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:44:32 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/19 18:42:46 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int fst = 24;
	int snd = 42;
	int *a = &fst;
	int *b = &snd;

	ft_swap(a,b);
	printf("fst = %d\nsnd = %d\n",fst,snd );
}*/
