/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:04:23 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/15 15:10:58 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	result;

	count = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (count <= nb)
	{
		result *= count;
		count++;
	}
	return (result);
}

// #include <stdio.h> 
// int main(void)
// {
// 	int nb = 23;
// 	printf("%d", ft_iterative_factorial(nb));
// }
