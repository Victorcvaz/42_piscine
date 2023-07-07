/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:20:58 by mdias             #+#    #+#             */
/*   Updated: 2023/06/20 18:15:29 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"
#include <unistd.h>
#include <stdio.h>

int	ft_error(int n)
{
	if (!(n))
		write(2, "Error\n", 6);
	return (n);
}

char	ft_dict_error(char *str)
{
	if (!(*str))
		write(2, "Dict Error\n", 12);
	return (*str);
}

int	main(int argc, char **argv)
{
	char	buffer[BUFFER_SIZE + 1];
	char	clean_str[1000];

	if (argc == 2 || argc == 3)
	{
		if (argv[argc - 1][0] == '0')
		{
			write(1, "0\n", 2);
			return (0);
		}
		if (!(ft_error(ft_atoi(argv[argc - 1], clean_str))))
			return (0);
		if (argc == 2)
		{
			if (!(ft_dict_error(ft_read_file(buffer)))) 
				return (0);
		}
		else if (argc == 3)
		{
			if (!(ft_dict_error(ft_read_file2(buffer, argv[1]))))
				return (0);
		}
		ft_print_number(buffer, clean_str);
		return (0);
	}
	ft_error (0);
}
