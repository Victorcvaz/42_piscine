/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:29:12 by mdias             #+#    #+#             */
/*   Updated: 2023/06/20 13:38:57 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*ft_read_file(char	*buffer)
{
	int file;
	int	read_byte;

	file = open(DICT_PATH, O_RDONLY);
	read_byte = read(file, buffer, BUFFER_SIZE);
	buffer[read_byte] = '\0';
	close(file);
	return (buffer);
}
