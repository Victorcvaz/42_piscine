/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:00:23 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/06/19 01:32:24 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_NUMBER_H
# define FT_PRINT_NUMBER_H

void	unit(char *buffer, char *c);
void	ten(char *buffer, char *c);
void	hundred(char *buffer, char *c);
void	thousand(char *buffer, char *c, int len);
void	million(char *buffer, char *c, int len);
void	billion(char *buffer, char *c);
void    ft_print_two_or_more_decimal(char *arr, char *nbr, int len);
void	ft_handle_zero(char *buffer, char *nbr, int len);
char	*ft_filter_zero(char *nbr, int len);

#endif