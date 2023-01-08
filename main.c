/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacorrei <gacorrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:21:50 by gacorrei          #+#    #+#             */
/*   Updated: 2022/12/05 13:19:53 by gacorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		fd2;
	char	*name;
	char	*other;

	name = "test_error";
	other = "text_10";
	fd = open(name, O_RDONLY);
	fd2 = open(other, O_RDONLY);
	printf("\n");
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("\n");
	close(fd);
	close(fd2);
	return (0);
}

/* int	main(void)
{
	int		fd;
	int		fd2;
	char	*name;
	char	*other;
	char	*temp;

	name = "test_error";
	other = "text_10";
	fd = open(name, O_RDONLY);
	fd2 = open(other, O_RDONLY);
	printf("\n");
	temp = get_next_line(fd);
	printf("%s", temp);
	free(temp);
	temp = get_next_line(fd2);
	printf("%s", temp);
	free(temp);
	temp = get_next_line(fd);
	printf("%s", temp);
	free(temp);
	temp = get_next_line(fd2);
	printf("%s", temp);
	free(temp);
	temp = get_next_line(fd);
	printf("%s", temp);
	free(temp);
	temp = get_next_line(fd2);
	printf("%s", temp);
	free(temp);
	temp = get_next_line(fd);
	printf("%s", temp);
	free(temp);
	temp = get_next_line(fd2);
	printf("%s", temp);
	free(temp);
	printf("\n");
	close(fd);
	close(fd2);
	return (0);
} */
