/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:39:14 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/07 11:29:23 by vcesar-v         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	if (!src)
		return (0);
	counter = ft_strlen(src);
	if (!size)
		return (counter);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	char src[] = "Peixeassado";
// 	char dest[] = "";
// 	printf("%d", ft_strlcpy(dest, src, 8));
// 	return 0;
// }
