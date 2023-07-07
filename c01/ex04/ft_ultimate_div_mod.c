/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:57:39 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/04 19:26:01 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result1;
	int	result2;

	result1 = *a / *b;
	result2 = *a % *b;
	*a = result1;
	*b = result2;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}*/