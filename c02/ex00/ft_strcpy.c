/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:50:21 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 01:35:12 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	dest[count] = src[count];
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "Victor";
// 	char dest[] = "";
// 	char result[1];
// 	printf("%s", ft_strcpy(dest, src));
// 	return (0);
// }