/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 05:08:41 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 11:17:29 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] -= 32;
		c++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
//     char    name2[] = "1sdaa23161236521a";
//     printf("%s", ft_strupcase(name2));
// }