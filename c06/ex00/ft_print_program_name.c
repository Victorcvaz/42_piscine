/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:26:26 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/15 15:06:06 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	count;

	argc = 0;
	count = 0;
	while (argv[argc][count] != '\0')
	{
		ft_putchar(argv[0][count]);
		count++;
	}
	ft_putchar('\n');
}
