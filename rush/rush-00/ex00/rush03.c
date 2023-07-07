/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:54:08 by mgaletti          #+#    #+#             */
/*   Updated: 2023/05/28 09:11:17 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_charprint(int len, char first, char middle, char last)
{	
	int		c_counter;

	c_counter = 1;
	while (c_counter <= len)
	{
		if (c_counter == 1)
		{
			ft_putchar(first);
		}
		else if (c_counter == len)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		c_counter++;
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	int		l_counter;

	l_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (l_counter <= y)
		{
			if (l_counter == 1)
			{
				ft_charprint(x, 'A', 'B', 'C');
			}
			else if (l_counter == y)
			{
				ft_charprint(x, 'A', 'B', 'C');
			}
			else
			{
				ft_charprint(x, 'B', ' ', 'B');
			}
			l_counter++;
		}
	}
}
