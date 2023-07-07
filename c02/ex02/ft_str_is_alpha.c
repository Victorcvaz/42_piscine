/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 02:49:57 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 17:44:26 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] > 96 && str[c] < 123) || (str[c] > 64 && str[c] < 91)))
			return (0);
		c++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_str_is_alpha("123z2341"));
// 	printf("%d", ft_str_is_alpha(""));
// 	printf("%d", ft_str_is_alpha("aaBBzZAa"));
// }