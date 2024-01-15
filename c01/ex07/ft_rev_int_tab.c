/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:56:37 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/19 18:46:54 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i ++;
	}
}

/*int	main(void)
{
	int tab[] = {1,5,4,8,5};
	int size = 5;
	printf("%d %d %d %d %d %d\n",tab[0],tab[1],tab[2],tab[3],tab[4]);
	ft_rev_int_tab(tab,size);	
	printf("%d %d %d %d %d %d",tab[0],tab[1],tab[2],tab[3],tab[4]);
}*/
