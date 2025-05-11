/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:15:15 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/11 16:24:35 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	s[BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (s[0] != '\0')
	{
		line = ft_strjoin(line, s);	
	}
	while (read(fd, s, BUFFER_SIZE) > 0 && check_newline(s))
		line = ft_strjoin(line, s);
	if (!check_newline(s))
		line = ft_strjoin(line, s);
	clean_buffer(s);
	return (line);
}
int main()
{
	char	*s;
	int fd = open("test.txt", O_RDONLY);
	s = get_next_line(fd);

	printf("%s", s);
	s = get_next_line(fd);

	printf("%s", s);
	s = get_next_line(fd);

	printf("%s", s);
}