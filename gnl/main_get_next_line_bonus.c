/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:51:59 by nfordoxc          #+#    #+#             */
/*   Updated: 2024/11/18 10:59:29 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	int		fd5;
	int		nb_line1;
	int		nb_line2;
	int		nb_line3;
	int		nb_line4;
	int		nb_line5;
	int		read;
	char	*line1;
	char	*line2;
	char	*line3;
	char	*line4;
	char	*line5;

	nb_line1 = 0;
	nb_line2 = 0;
	nb_line3 = 0;
	nb_line4 = 0;
	nb_line5 = 0;
	fd1 = open("files/text", O_RDONLY);
	fd2 = open("files/text_10", O_RDONLY);
	fd3 = open("files/big_text", O_RDONLY);
	fd4 = open("files/big_line", O_RDONLY);
	fd5 = open("files/big_text_litle_line", O_RDONLY);
	line1 = get_next_line(fd1);
	printf("Debut test Bonus\n");
	read = 1;
	while (read)
	{
		if (line1)
		{
			printf("FILE1:\n%s", line1);
			nb_line1++;
		}
		line2 = get_next_line(fd2);
		line3 = get_next_line(fd3);
		line4 = get_next_line(fd4);
		line5 = get_next_line(fd5);
		if (line2)
		{
			printf("FILE2:\n%s", line2);
			nb_line2++;
		}
		if (line3)
		{
			printf("FILE3:\n%s", line3);
			nb_line3++;
		}
		if (line4)
		{
			printf("FILE4:\n%s", line4);
			nb_line4++;
		}
		if (line5)
		{
			printf("FILE5:\n%s", line5);
			nb_line5++;
		}
		if ((!line1 && !line2 && !line3 && !line4 && !line5))
			read = 0;
		if (line1 != NULL)
			free(line1);
		if (line2 != NULL)
			free(line2);
		if (line3 != NULL)
			free(line3);
		if (line4 != NULL)
			free(line4);
		if (line5 != NULL)
			free(line5);
		line1 = get_next_line(fd1);
	}
	printf("Fin de test Bonus\n");
	if (line1 != NULL)
		free(line1);
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	close(fd5);
	printf("text :\n");
	nb_line1 == 102 ? printf("FD1 => [OK]\n") : printf("FD1 => [KO!!]\n");
	printf("text_10 :\n");
	nb_line2 == 159 ? printf("FD2 => [OK]\n") : printf("FD2 => [KO!!]\n");
	printf("big_text :\n");
	nb_line3 == 30986 ? printf("FD3 => [OK]\n") : printf("FD3 => [KO!!]\n");
	printf("big_line :\n");
	nb_line4 == 52 ? printf("FD4 => [OK]\n") : printf("FD4 => [KO!!]\n");
	printf("big_text_litle_line :\n");
	nb_line5 == 251923 ? printf("FD5 => [OK]\n") : printf("FD5 => [KO!!]\n");
	return (0);
}
