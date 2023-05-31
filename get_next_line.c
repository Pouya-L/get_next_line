/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:15:22 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/31 19:17:54 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	size_t		i;
	char		*line;

	i = 0;
	line = NULL;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		while (buffer[i])
			buffer[i++] = 0;
		return (0);
	}
	while (buffer[0] || read(fd, buffer, BUFFER_SIZE))
	{
		line = ft_strjoin_nl(line, buffer);
		if (ft_is_new_line(buffer))
			break ;
	}
	return (line);
}

/*int main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		printf("The file couldn't be opened!");
	while (line = get_next_line(fd))
	{
		printf("%s", line);
		free(line);
	}
	return (0);
}*/
