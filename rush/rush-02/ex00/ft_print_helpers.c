/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:59:59 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/20 18:24:27 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	unit(char *buffer, char *nbr)
{
	char	digit[2];

	digit[0] = nbr[0];
	digit[1] = '\0';
	if (digit[0] != '0')
	{
		ft_print_number_as_str(buffer, digit);
		write(1, " ", 1);
	}
}

void	ten(char *buffer, char *nbr)
{
	char	custom[3];

	custom[2] = '\0';
	if (nbr[0] == '1')
	{
		ft_print_number_as_str(buffer, nbr);
		write(1, " ", 1);
	}
	else
	{
		custom[0] = nbr[0];
		custom[1] = '0';
		if (nbr[0] != '0')
		{
			ft_print_number_as_str(buffer, custom);
			write(1, " ", 1);
			unit(buffer, &nbr[1]);
		}
		else
		{
			ft_print_number_as_str(buffer, custom);
			write(1, " ", 1);
		}
	}
}

void	hundred(char *buffer, char *nbr)
{
	if (nbr[0] != '0')
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "100");
		write(1, " ", 1);
	}
	if (nbr[1] == '0' && nbr[2] != '0')
	{
		nbr += 2;
		unit(buffer, nbr);
	}
	else if (nbr[1] != '0')
		ten(buffer, ++nbr);
}

void	thousand(char *buffer, char *nbr, int len)
{
	char	arr[10];
	
	if (nbr[0] == '0')
		ft_handle_zero(buffer, nbr, len);
	if (len == 4)
	{
		unit(buffer, nbr);
		ft_print_number_as_str(buffer, "1000");
		write(1, " ", 1);
	}
	else if (len == 5)
	{
		ft_print_two_or_more_decimal(arr, nbr, 2);
		ten(buffer, arr);
		ft_print_number_as_str(buffer, "1000");
		write(1, " ", 1);
	}
	else if (len == 6)
	{
		ft_print_two_or_more_decimal(arr, nbr, 3);
		hundred(buffer, arr);
		ft_print_number_as_str(buffer, "1000");
		write(1, " ", 1);
	}
	if (len == 5)
		nbr++;
	if (len == 6)
		nbr += 2;
	hundred(buffer, ++nbr);
}
