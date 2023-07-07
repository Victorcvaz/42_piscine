/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 04:31:50 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 05:05:47 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str[count] <= 126))
			return (0);
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_str_is_printable("\0\b\a"));
// 	printf("%d", ft_str_is_printable(""));
// 	printf("%d", ft_str_is_printable("QZA"));
// }