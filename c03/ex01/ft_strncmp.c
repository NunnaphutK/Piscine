/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:49:40 by nkiticha          #+#    #+#             */
/*   Updated: 2023/07/26 20:46:32 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0')
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

/*int main(void)
{
        char str1[]    = "Hello";
        char str2[]    = "World";

    printf("ft_strcmp: %d ", ft_strcmp(str1, str2));
}*/
