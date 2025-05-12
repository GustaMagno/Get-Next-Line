/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:15:15 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/12 16:59:48 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	s[BUFFER_SIZE + 1];
	char		*line;
	int			readbytes = 0;

	line = NULL;
	// if (s[0] != '\0')
	// {
	// 	line = ft_strjoin(line, s);
	// }
	while (*s || read(fd, s, BUFFER_SIZE) > 0)
	{	
		line = ft_strjoin(line, s, line);
		if (!check_newline(s))
			return (clean_buffer(s), line);
		clean_buffer(s);
	}
	// if (!check_newline(s))
	// 	line = ft_strjoin(line, s);
	
	// printf("LIMPANDO : %s\n", s);
	return (line);
}
int main()
{
	char	*s;
	int fd = open("test.txt", O_RDONLY);
	// s = get_next_line(fd);
	//printf("%s", s);
	
	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	
	s = get_next_line(fd);
	printf("%s", s);
	free(s);
	
	s = get_next_line(fd);
	printf("%s", s);
	free(s);
}