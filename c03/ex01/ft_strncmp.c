/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:39:53 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/12 18:39:32 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n != 0)
	{
		while (s1[count] && (s1[count] == s2[count]) && count < n - 1)
		{
			count++;
		}
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "eixe";
// 	char str2[] = "eixe";
// 	printf("self test = %d", ft_strncmp(str1, str2, 2));
// }
