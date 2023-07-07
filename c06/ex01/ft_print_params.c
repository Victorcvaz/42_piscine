/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:12:55 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/15 12:30:14 by vcesar-v         ###   ########.fr       */
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
	int	count2;

	count = 1;
	count2 = 0;
	while (argc > count)
	{
		count2 = 0;
		while (argv[count][count2] && argv[count])
		{
			ft_putchar(argv[count][count2]);
			count2++;
		}
		ft_putchar('\n');
		count++;
	}
}
