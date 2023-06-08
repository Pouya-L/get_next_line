/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:09:28 by plashkar          #+#    #+#             */
/*   Updated: 2023/06/08 21:42:13 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	size_t		i;
	char		*line;

	i = 0;
	line = NULL;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		if (fd >= 0 && fd <= FOPEN_MAX)
			while (buffer[fd][i])
				buffer[fd][i++] = 0;
		return (0);
	}
	while (buffer[fd][0] || read(fd, buffer[fd], BUFFER_SIZE))
	{
		line = ft_strjoin_nl(line, buffer[fd]);
		if (ft_is_new_line(buffer[fd]))
			break ;
	}
	return (line);
}
