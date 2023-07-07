/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:36:38 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/05/31 22:47:31 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 122;
	while (count > 96)
	{
		write(1, &count, 1);
		count--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
