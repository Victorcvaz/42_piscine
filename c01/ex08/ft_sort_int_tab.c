/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:32:47 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/05 12:57:21 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	second_count;
	int	swap;

	count = 0;
	while (count < size)
	{
		second_count = 0;
		while (second_count < size - count -1)
		{
			if (tab[second_count] > tab[second_count + 1])
			{
				swap = tab[second_count];
				tab[second_count] = tab[second_count +1];
				tab[second_count + 1] = swap;
			}
			second_count++;
		}
		count++;
	}
}

/*int	main(void)
{
	int	tab[6];
	int size;

	size = 6;
	tab[0] = 49;
	tab[1] = 50;
	tab[2] = 55;
	tab[3] = 56;
	tab[4] = 54;
	tab[5] = 51;
	ft_sort_int_tab(tab, size);
	return (0);
}*/