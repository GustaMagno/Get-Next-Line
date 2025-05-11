/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:15:13 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/11 17:48:22 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (s1 && s1[i])
		i++;
	while (s2[j] != '\n' && s2[j])
		j++;
	str = malloc(((i + j + 1) + (s2[j] == '\n')) * sizeof(char *));
	if (!str)
		return (NULL);
	temp = str;
	while (s1 && *s1)
		*str++ = *s1++;
	while (*s2 && *s2 != '\n')
		*str++ = *s2++;
	if (*s2 == '\n')
		*str++ = '\n';
	// if (s1)
	// 	free(s1);
	*str = '\0';
	return (temp);
}
int	check_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}
void	clean_buffer(char *buffer)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n' && ++i)
			break;
		buffer[i++] = '\0';
	}
	while (buffer[i])
		buffer[j++] = buffer[i++];
	buffer[j] = '\0';
}