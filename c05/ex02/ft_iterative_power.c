/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:12:33 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/14 21:32:30 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	result;

	count = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (count < power)
	{
		result *= nb;
		count++;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d", ft_iterative_power(-2, 9));
// }