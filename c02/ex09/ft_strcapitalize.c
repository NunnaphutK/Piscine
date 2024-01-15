/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:36:49 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/20 17:11:19 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check_str(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (2);
	else if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i ++;
	}
	i = 0;
	if (ft_check_str(str[i]) == 2)
		str[i] -= 32;
	i ++;
	while (str[i] != '\0')
	{
		if (ft_check_str(str[i]) == 0)
			if (ft_check_str(str[i + 1]) == 2)
				str[i + 1] -= 32;
		i ++;
	}
	return (str);
}

/*#include <stdio.h>
int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}*/
