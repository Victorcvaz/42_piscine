/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:59:53 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/20 18:23:30 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	million(char *buffer, char *nbr, int len)
{
	char	arr[10];

	if (nbr[0] == '0')
		ft_handle_zero(buffer, nbr, len);
	if (len == 7)
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
	}
	else if (len == 8)
	{
		ft_print_two_or_more_decimal(arr, nbr, 2);
		ten(buffer, arr);
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
		nbr++;
	}
	else if (len == 9)
	{
		ft_print_two_or_more_decimal(arr, nbr, 3);
		hundred(buffer, arr);
		ft_print_number_as_str(buffer, "1000000");
		write(1, " ", 1);
		nbr += 2;
	}
	++nbr;
	thousand(buffer, nbr, ft_strlen(nbr));
}

void	billion(char *buffer, char *nbr)
{
	if (nbr[0] != 0)
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "1000000000");
		write(1, " ", 1);
		++nbr;
		million(buffer, nbr, ft_strlen(nbr));
	}
}
