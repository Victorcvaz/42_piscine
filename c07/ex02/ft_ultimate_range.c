/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:17:11 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/07/05 05:43:09 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*index1;
	int	count;

	count = 0;
	if (min >= max)
	{
		index1 = NULL;
		return (0);
	}
	if (!(index1 = (int*) malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
		index1[count++] = min++;
	*range = index1;
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	**range;
// 	int	c;
	
// 	c = 0;
// 	if (!(ft_ultimate_range(range, 3, 8)))
// 		return (0);
// 	while (range[0][c])
// 		printf("%d ", range[0][c++]);
// }
