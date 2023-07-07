/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:28:08 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/05 12:58:19 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	char	str[3];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	ft_putstr(str);
	return (0);
}*/