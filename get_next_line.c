/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:15:15 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/05 20:17:27 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	s[BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	read(fd, s, BUFFER_SIZE);
	while (check_newline(s, BUFFER_SIZE))
	{
		
	}
	return (line);
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	get_next_line(fd);
}
