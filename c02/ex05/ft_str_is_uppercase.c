/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 04:27:19 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 04:30:38 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
			return (0);
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_str_is_uppercase("AaB"));
// 	printf("%d", ft_str_is_uppercase(""));
// 	printf("%d", ft_str_is_uppercase("QZA"));
// }