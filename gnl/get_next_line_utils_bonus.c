/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:44:30 by nfordoxc          #+#    #+#             */
/*   Updated: 2024/06/17 11:27:40 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*
 *	ft_strchr chearch the first occurence of the char c.
 */

char	*ft_strchr(char const *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (*str == c)
		return ((char *)str);
	return (NULL);
}

/*
 *	ft_strlen calculate the lenght of the string
 */

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (len);
	while (*str++)
		len++;
	return (len);
}

/*
 *	ft_strjoin two string in one
 */

char	*ft_strjoin(char *buff, char *lu)
{
	size_t	len_buff;
	size_t	len_lu;
	size_t	index;
	char	*joinstr;
	char	*src;

	if (!buff && !lu)
		return (free(buff), NULL);
	len_buff = ft_strlen(buff);
	len_lu = ft_strlen(lu);
	joinstr = (char *)malloc((len_buff + len_lu + 1) * sizeof(char));
	if (!joinstr)
		return (free(buff), NULL);
	src = buff;
	index = 0;
	while (src && *src)
		joinstr[index++] = *src++;
	src = lu;
	while (src && *src)
		joinstr[index++] = *src++;
	joinstr[index] = 0;
	free(buff);
	buff = NULL;
	return (joinstr);
}
