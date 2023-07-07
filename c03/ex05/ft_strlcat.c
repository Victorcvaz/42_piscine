/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:30:27 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/14 17:11:25 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		curr_size;
	unsigned int		dest_len;
	unsigned int		src_len;

	curr_size = size;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (*dest)
	{
		if (curr_size > 0)
			curr_size--;
		dest++;
	}
	while (*src && curr_size > 1)
	{
		*dest++ = *src++;
		curr_size--;
	}
	*dest = '\0';
	if (size > dest_len)
		return (dest_len + src_len);
	return (size + src_len);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[] = "catiorro";
// 	char src[] = "coelho";
// 	printf("%d", ft_strlcat(dest, src, 10));
// }
