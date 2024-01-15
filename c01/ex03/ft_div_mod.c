/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:46:26 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/19 18:45:18 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int fst = 100;
	int snd = 3;
	int *a = &fst;
	int *b = &snd;


	ft_div_mod(fst,snd,a,b);
	printf("a = %d b = %d",*a,*b);
}*/
