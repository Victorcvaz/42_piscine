/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:20:41 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/07/01 14:43:20 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int count;

    count = 1;
    if (nb == 0)
        return (0);
    while (count * count < nb)
    {
        count++;
    }
    if ((nb % count) == 0)
        return (count);
    return (0);
}

/*#include <stdio.h>

int main(void)
{
    printf("Sqrt: %d\n", ft_sqrt(8));
}*/