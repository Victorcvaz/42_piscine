/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 07:37:09 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/14 17:41:25 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		curr;
	int		sign;
	int		nbr;

	sign = 1;
	curr = 0;
	while ((str[curr] >= '\t' && str[curr] <= '\r') || str[curr] == ' ')
	{
		curr++;
	}
	while (str[curr] == '-' || str[curr] == '+')
	{	
		if (str[curr] == '-')
			sign *= -1;
		curr++;
	}
	nbr = 0;
	while (str[curr] > 47 && str[curr] < 58)
	{
		nbr *= 10;
		nbr += str[curr] - '0';
		curr++;
	}
	return (nbr * sign);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_atoi(" ---+--+1234ab567"));
// }