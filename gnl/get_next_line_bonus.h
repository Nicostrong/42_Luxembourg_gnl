/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:57:30 by nfordoxc          #+#    #+#             */
/*   Updated: 2024/06/17 11:27:39 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/*
 * Define BUFFER_SIZE
 */

# define MAX_FD 1024
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE  100
# endif

/*
 * Include Libc
 */

# include <unistd.h>
# include <stdlib.h>

/*
 * get_next_line.c
 */

char	*get_next_line(int fd);

/*
 * get_next_line_utils.c
 */

size_t	ft_strlen(char *str);

char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *buff, char *lu);

#endif
