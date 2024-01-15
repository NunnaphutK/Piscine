/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkdict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:49:51 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/30 18:23:41 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char t)
{
	if (t == '\t' || t == '\n' || t == '\v')
		return (1);
	if (t == '\f' || t == '\r' || t == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	arr[2];

	arr[0] = 0;
	arr[1] = 0;
	while (ft_check(str[arr[0]]) == 1)
		arr[0]++;
	if (str[arr[0]] == '+')
		arr[0]++;
	while (str[arr[0]] >= '0' && str[arr[0]] <= '9')
	{
		arr[1] = arr[1] * 10 + (str[arr[0]] - 48);
		arr[0]++;
	}
	return (arr[1]);
}

int	findco(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (ft_check(str[i]) == 1)
		i++;
	while (str[i] != '\n')
	{
		if (str[i] < 32 || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}
