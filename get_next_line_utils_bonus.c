/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 18:31:42 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/18 21:46:42 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2, char *s1_temp)
{
	char		*str;
	size_t		i;
	size_t		j;
	char		*temp;

	i = 0;
	j = 0;
	while (s1 && s1[i])
		i++;
	while (s2[j] != '\n' && s2[j])
		j++;
	str = malloc((i + j + 1 + (s2[j] == '\n')) * sizeof(char));
	if (!str)
		return (NULL);
	temp = str;
	while (s1 && *s1)
		*str++ = *s1++;
	while (*s2 && *s2 != '\n')
		*str++ = *s2++;
	if (*s2 == '\n')
		*str++ = '\n';
	free(s1_temp);
	*str = '\0';
	return (temp);
}
int	check_newline(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}
void	clean_buffer(char *buffer, int check)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (buffer[i])
	{
		if (!check && buffer[i] == '\n')
		{	
			buffer[i++] = '\0';
			break;
		}
		buffer[i++] = '\0';
	}
	while (buffer[i])
	{	
		buffer[j++] = buffer[i];
		buffer[i++] = '\0';
	}
	buffer[j] = '\0';
}
