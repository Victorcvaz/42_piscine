/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:37:04 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/05/31 22:34:05 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

/*int	main(void)
{
	ft_putchar('c');
	return (0);
}*/
