/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:36:31 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/19 18:45:29 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	fst;
	int	snd;

	fst = *a / *b;
	snd = *a % *b;
	*a = fst;
	*b = snd;
}

/*int main(void)
{
	int fst = 100;
	int snd = 5;
	int *div = &fst;
	int *mov = &snd;

	ft_ultimate_div_mod(div,mov);
	printf("a = %d b = %d", *div, *mov);
}*/
