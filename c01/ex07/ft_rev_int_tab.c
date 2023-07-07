/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:54:44 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/06 15:45:49 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	r_count;
	int	swap;

	count = 0;
	r_count = size -1;
	while (count < (size / 2))
	{
		swap = tab[count];
		tab[count] = tab[r_count];
		tab[r_count] = swap;
		count++;
		r_count--;
	}
}

/*int	main(void)
{
	int	tab[6];
	int size;

	size = 6;
	tab[0] = 48;
	tab[1] = 55;
	tab[2] = 52;
	tab[3] = 49;
	tab[4] = 57;
	tab[5] = 56;
	ft_rev_int_tab(tab, size);
	return (0);
}*/