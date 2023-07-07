/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:49:35 by mdias             #+#    #+#             */
/*   Updated: 2023/06/20 20:04:48 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (str);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	dest[0] = '\n';
	while (i < size && src[i] != '\0')
	{
		dest[i+1] = src[i];
		i++;
	}
	if (i < size + 1)
		dest[i+1] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (TRUE);
	else
	{
		return (FALSE);
	}
}

int	ft_strlen_custom(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0' && *str != '\n')
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}