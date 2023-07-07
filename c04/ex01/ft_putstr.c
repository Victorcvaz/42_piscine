/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:51:38 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/14 17:42:07 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
}

// int	main(void)
// {
// 	char	str[3];

// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[2] = 'c';
// 	ft_putstr(str);
// 	return (0);
// }