/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:24:12 by mdias             #+#    #+#             */
/*   Updated: 2023/06/20 20:32:14 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include "./ft_print_number.h"
# include <fcntl.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

# define DICT_PATH "./numbers.dict"
# define BUFFER_SIZE 1000
# define TRUE 1
# define FALSE 0

char			*ft_print_number_as_str(char *buffer, char *to_find);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_is_alpha(char c);
char			*ft_read_file(char *buffer);
int				ft_strlen_custom(char *str);
void			ft_print_number(char *buffer, char *nbr);
int				ft_strlen(char *str);
int				ft_atoi(char *ugly, char *clean);
int				ft_error(int n);
char			ft_dict_error(char *str);
char	 		*ft_read_file2(char *buffer, char *new_dict);

#endif