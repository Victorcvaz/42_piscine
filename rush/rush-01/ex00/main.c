/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:25:49 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/05 10:05:37 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_touch(char **argv);

int	ft_touch(char **argv)
{
	int	count;

	count = 0;
	while (argv[1][count])
	{
		if (count % 2 == 1)
		{
			if (argv[1][count] != ' ')
				return (0);
		}
		if (count % 2 == 0)
		{	
			if (argv[1][count] < 1 || argv[1][count] > 4)
				return (0);
		}
		count++;
	}	
	if (count != 31)
		return (0);
	return(1);
}

int	main(int argc, char **argv)
{
	int	stop;

	if (argc != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	stop = ft_touch(argv);
	if (stop == 0)
		write(1, "Error", 5);
	return (0);
}
