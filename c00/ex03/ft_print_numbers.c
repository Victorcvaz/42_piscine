/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:26:39 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/05/31 22:48:20 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n < 58)
	{
		write(1, &n, 1);
		n++;
	}
}
