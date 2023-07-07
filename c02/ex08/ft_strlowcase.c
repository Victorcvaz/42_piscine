/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 05:30:57 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 05:35:16 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] += 32;
		c++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
//     char    name2[] = "AAALDKDSPAKDP23161236521a";
//     printf("%s", ft_strlowcase(name2));
// }