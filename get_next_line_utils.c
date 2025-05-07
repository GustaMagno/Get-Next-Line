/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:15:13 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/05 20:18:02 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*create_str(char *s1, char *s2)
{
	char	*str;
	int		i;
	char	*tmp;

	i = 0;
	while (s1[i])
		i++;
	
	str = malloc((i + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	tmp = str;
	while (*s)
		*str++ = *s++;
	*str = '\0';
	return (tmp);
}
int	check_newline(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}