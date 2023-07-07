/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:29:37 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/04 15:07:40 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(int n, int n2, int n3);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	int		n;
	int		n2;
	int		n3;

	n = 48;
	n2 = 49;
	n3 = 50;
	while (n < 56)
	{	
		while (n2 < 57)
		{
			while (n3 < 58)
			{
				ft_putchar(n, n2, n3);
				n3++;
			}
			n3 = n2 + 2;
			n2++;
		}
		n3 = n + 3;
		n2 = n + 2;
		n++;
	}
}

void	ft_putchar(int n, int n2, int n3)
{
	write(1, &n, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (n < 55)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
