/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:39:17 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/05/31 22:33:38 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int		c_count;

	c_count = 97;
	while (c_count < 123)
	{
		write(1, &c_count, 1);
		c_count++;
	}
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */
