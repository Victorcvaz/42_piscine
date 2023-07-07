/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 21:33:52 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/07/02 19:38:34 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int     count;
    int     len;
    char    *str;

    len = 0;
    while (src[len])
        len++;
    str = (char*) malloc(sizeof(*str) * (len + 1));
    count = 0;
    while (count < len)
    {
        str[count] = src[count];
        count++;
    }
    return (str);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     printf("%s\n", ft_strdup("TextMallocado1"));
//     printf("%s\n", strdup("TextMallocado2"));
// }
