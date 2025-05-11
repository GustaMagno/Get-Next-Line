/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 19:37:44 by gustoliv          #+#    #+#             */
/*   Updated: 2025/05/11 16:23:31 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
		i++;
	}
	while (buffer[i])
	{
		buffer[j++] = buffer[i++];
	}
	buffer[j] = '\0';
	printf("%s", buffer);
}
int main()
{
	char	str[] = "saoidhousad\ndef";

	clean_buffer(str);
}
