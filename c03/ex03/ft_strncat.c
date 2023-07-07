/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:45:46 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/09 00:58:35 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	curr;
	int				len;

	curr = 0;
	len = ft_strlen(dest);
	while (src[curr] != '\0' && curr < nb)
	{
		dest[len] = src[curr];
		len++;
		curr++;
	}
	dest[len] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "bun";
// 	char str2[] = "da";
// 	printf("self test: %s", ft_strncat(str1, str2, 5));
// }