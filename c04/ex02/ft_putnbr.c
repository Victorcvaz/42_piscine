/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:55:51 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/14 19:08:52 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	rest[10];
	int		i;

	nbl = nb;
	i = 0;
	if (0 == nb)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while (nbl > 0)
	{
		rest[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
	{
		write(1, &rest[--i], 1);
	}
}

// int main(void)
// {
// 	ft_putnbr(145365);
// }
