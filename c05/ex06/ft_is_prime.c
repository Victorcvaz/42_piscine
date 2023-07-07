/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:14:27 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/07/01 21:29:53 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int div;
    
    div = 2;
    if (nb <= 1)
        return (0);
    while (div <= nb / div)
    {
        if (nb % div == 0)
            return (0);
        div++;
    }
    return (1);
}

/*#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_is_prime(3));
    printf("%d\n", ft_is_prime(5));
    printf("%d\n", ft_is_prime(0));
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_is_prime(463));
}*/