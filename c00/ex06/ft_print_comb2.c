/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 06:32:35 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/02 22:06:07 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putnum(int count);

void	ft_putnum(int count)
{
	char	convert_type;

	if (count < 10)
	{
		convert_type = count + 48;
		write(1, "0", 1);
		write(1, &convert_type, 1);
		return ;
	}
	convert_type = (count / 10) + 48;
	write(1, &convert_type, 1);
	convert_type = count % 10 + 48;
	write(1, &convert_type, 1);
}

void	ft_print_comb2(void)
{
	int	count1;
	int	count2;

	count1 = 0;
	while (count1 < 99)
	{
		count2 = count1 + 1;
		while (count2 < 100)
		{
			ft_putnum(count1);
			write(1, " ", 1);
			ft_putnum(count2);
			if (count1 == 98 && count2 == 99)
				return ;
			else
				write(1, ", ", 2);
			count2++;
		}
		count1++;
	}	
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
