/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 04:19:38 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/07/06 00:51:13 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str, char **strs, int size)
{
	int		len;
	int		c1;
	int		c2;
	
	c1 = -1;
	len = 0;
	while (str[len])
		len++;
	len *= size - 1;
	while (strs[++c1])
		{
			c2 = 0;
			while (strs[c1][c2++])
				len++;
		}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		matriz_index;
	int		str_index;
	int		loop_index;
	
	matriz_index = -1;
	str_index = 0;
	if (!(str = (char *) malloc(sizeof(char) * ft_strlen(sep, strs, size) + 1)))
		return (0);
	while (++matriz_index < size)
	{
		loop_index = 0;
		while (strs[matriz_index][loop_index] != '\0')
			str[str_index++] = strs[matriz_index][loop_index++];
		loop_index = 0;
		while (sep[loop_index] != '\0' && matriz_index < size - 1)
			str[str_index++] = sep[loop_index++];
	}
	str[str_index] = '\0';
	return (str);
}

// #include <stdio.h>
// int		main(int argc, char **argv)
// {
// 	char	sep[3] = {'F', 'F', '\0'};
// 	printf("Join result: %s\n", ft_strjoin(argc - 1, ++argv, sep));
// }
