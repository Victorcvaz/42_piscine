/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:22:06 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/19 01:32:05 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*ft_filter_zero(char *nbr, int len)
{
	char	*arr;
	int		count;
	int		curr;

	count = 0;
	curr = 0;
	arr = malloc(len + 1);
	while (nbr[count] != '\0')
	{
		while (nbr[count] != '0')
			count++;
		arr[curr] = nbr [count];
		curr++;
		count++;
	}
	arr[curr] = '\0';
	return (arr);
}

void	ft_handle_zero(char *buffer, char *nbr, int len)
{
	char	*clean_str;

	clean_str = ft_filter_zero(nbr, len);
	ft_print_number(buffer, clean_str);
}

void ft_print_two_or_more_decimal(char *arr, char *nbr, int len)
{
	int		count;

	count = 0;
	while (count < len)
	{
		arr[count] = nbr[count];
		count++;
	}
	arr[count] = '\0';
}

