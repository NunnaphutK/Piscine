/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:55:54 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/19 18:47:08 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
		{
			i ++;
		}
	}
}

/*#include <stdio.h>
int main() {
    int tab[] = {9,5,8,7,6,10};
    int size = 6;
    printf("%d %d %d %d %d %d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
    ft_sort_int_tab(tab,size);
    printf("%d %d %d %d %d %d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
}*/
