/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:50:29 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/12 18:40:06 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s1[count] == s2[count])
	{		
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "eixe";
// 	char str2[] = "eixe";
// 	printf("self test = %d", ft_strcmp(str1, str2));
// }