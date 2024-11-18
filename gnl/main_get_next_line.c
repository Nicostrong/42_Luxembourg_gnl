/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:30:02 by nfordoxc          #+#    #+#             */
/*   Updated: 2024/06/17 11:27:47 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		file_descriptor;
	int		nb_line;
	char	*file;
	char	*line;

	if (argc < 2)
		return (0);
	file = argv[1];
	file_descriptor = open(file, O_RDONLY);
	line = get_next_line(file_descriptor);
	nb_line = 1;
	while (line)
	{
		printf("%s", line);
		printf("************** LINE n° = %d  *******************\n", nb_line);
		nb_line++;
		free(line);
		line = get_next_line(file_descriptor);
	}
	nb_line--;
	free(line);
	close(file_descriptor);
	printf("Fin de test lecture fichier\n");
	if (!strcmp(file, "./files/big_line"))
	{
		printf("%s:\n", file);
		nb_line == 52 ? printf("TEST => [OK]\n") : printf("TEST => [KO]\n");
	}
	if (!strcmp(file, "./files/big_text"))
	{
		printf("%s:\n", file);
		nb_line == 30986 ? printf("TEST => [OK]\n") : printf("TEST => [KO]\n");
	}
	if (!strcmp(file, "./files/big_text_litle_line"))
	{
		printf("%s:\n", file);
		nb_line == 251923 ? printf("TEST => [OK]\n") : printf("TEST => [KO]\n");
	}
	if (!strcmp(file, "./files/test"))
	{
		printf("%s:\n", file);
		nb_line == 22 ? printf("\nTEST => [OK]\n") : printf("\nTEST => [KO]\n");
	}
	if (!strcmp(file, "./files/test1"))
	{
		printf("%s:\n", file);
		nb_line == 3 ? printf("\nTEST => [OK]\n") : printf("\nTEST => [KO]\n");
	}
	if (!strcmp(file, "./files/text"))
	{
		printf("%s:\n", file);
		nb_line == 2 ? printf("\nTEST => [OK]\n") : printf("\nTEST => [KO]\n");
	}
	if (!strcmp(file, "./files/text_10"))
	{
		printf("%s:\n", file);
		nb_line == 159 ? printf("\nTEST => [OK]\n") : printf("\nTEST => [KO]\n");
	}
	return (0);
}
