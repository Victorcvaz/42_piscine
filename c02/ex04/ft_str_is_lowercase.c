/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 03:50:45 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 04:26:15 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] > 96 && str[count] < 123))
			return (0);
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_str_is_lowercase("AaB"));
// 	printf("%d", ft_str_is_lowercase(""));
// 	printf("%d", ft_str_is_lowercase("aaaaaeeeq"));
// }