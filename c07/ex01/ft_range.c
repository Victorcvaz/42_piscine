/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:41:20 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/07/02 20:47:06 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	index;

	if (min >= max)
		return (0);
	if (!(tab = (int*) malloc(sizeof(*tab) * (max - min))))
		return (0);
	index = 0;
	while (min < max)
		tab[index++] = min++;
	return (tab);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*test;
// 	int	count;

// 	count = 0;
// 	if (!(test = ft_range(2, 3)))
// 		return (0);
// 	while (test[count])
// 	{
// 		printf("%d ", test[count]);
// 		count++;
// 	}
// }
