/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:20:48 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/14 21:10:24 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h> 
// int main(void)
// {
// 	int nb = 4;
// 	printf("%d", ft_recursive_factorial(nb));
// }