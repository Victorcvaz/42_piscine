/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 03:19:15 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/12 12:24:45 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	cur;
	int	cur2;

	cur = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[cur] != '\0')
	{
		cur2 = 0;
		while (str[cur + cur2] != '\0' && str[cur + cur2] == to_find[cur2])
		{
			if (to_find[cur2 + 1] == '\0')
				return (&str[cur]);
			cur2++;
		}
		cur++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "cansaço";
// 	char to_find[] = "a";
// 	printf("%c", ft_strstr(str, to_find));
// }
