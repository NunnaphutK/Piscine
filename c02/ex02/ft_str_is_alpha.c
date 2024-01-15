/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 04:51:25 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 11:25:43 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	char i[];
	char *n = "fuihiut4442";

	printf("%d",ft_str_is_alpha(i));
	printf("%d",ft_str_is_alpha(n));
}*/
