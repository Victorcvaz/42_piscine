/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:15:48 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/12 13:25:24 by vcesar-v         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	curr;

	curr = 0;
	len = ft_strlen(dest);
	while (src[curr] != '\0')
	{
		dest[len] = src[curr];
		len++;
		curr++;
	}
	dest[len] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "hot";
// 	char str2[] = "dog";
// 	printf("%s", ft_strcat(str1, str2));
// 	return 0;
// }
