/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:49:32 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/12 15:50:05 by vcesar-v         ###   ########.fr       */
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

/*int	main(void)
{
	char	str[3];
	int b;

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	b = ft_strlen(str);
	return (0);
}*/