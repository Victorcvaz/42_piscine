/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:22:09 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 10:51:52 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count ++;
	}
	while (count < n)
		dest[count++] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Victor";
// 	char dest[] = "sdoandioansodinaoidnsa";
// 	char result[1];
// 	printf("%s", ft_strncpy(dest, src, 20));
// 	return (0);
// }