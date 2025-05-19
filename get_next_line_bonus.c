/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:29:13 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/18 21:49:15 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	s[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			size;
	
	line = NULL;
	size = 1;
	if (fd < 0 || fd >= FOPEN_MAX)
		return (NULL);
	while (size)
	{
		if (*s[fd] == '\0')
			size = read(fd, s[fd], BUFFER_SIZE);
		if (size < 0)
			return (clean_buffer(s[fd], 1), free(line), NULL);
		if (size)
		{
			line = ft_strjoin(line, s[fd], line);
			if (!check_newline(s[fd]))
				return (clean_buffer(s[fd], 0), line);
			clean_buffer(s[fd], 0);
		}
	}
	return (line);
}
// int main()
// {
// 	char	*s;
// 	int fd = open("test.txt", O_RDONLY);
// 	int fd2 = open("test2.txt", O_RDONLY);
// 	// s = get_next_line(fd);
// 	//printf("%s", s);
	
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
	
// 	s = get_next_line(fd2);
// 	printf("%s", s);
// 	free(s);

// 	s = get_next_line(fd2);
// 	printf("%s", s);
// 	free(s);

// 	s = get_next_line(fd2);
// 	printf("%s\n", s);
// 	free(s);
	
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);

// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// }
