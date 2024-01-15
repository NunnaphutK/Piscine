/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:40:59 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/27 00:04:23 by nkiticha         ###   ########.fr       */
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
	int	arr[3];

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 0;
	while (ft_check(str[arr[0]]) == 1)
		arr[0]++;
	while (str[arr[0]] == '+' || str[arr[0]] == '-')
	{
		if (str[arr[0]] == '-')
			arr[1] *= -1;
		arr[0]++;
	}
	while (str[arr[0]] >= '0' && str[arr[0]] <= '9')
	{
		arr[2] = arr[2] * 10 + (str[arr[0]] - 48);
		arr[0]++;
	}
	return (arr[1] * arr[2]);
}

/*int main(void)
{
	printf("%d",ft_atoi("	---+--+1234ab567"));
}*/
