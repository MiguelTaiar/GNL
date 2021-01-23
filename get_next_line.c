/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <mtaiar-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:50:11 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/10/25 22:23:42 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	int			rd;
	char		*tmp;
	char		*buff;
	static char	*hold;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(line = malloc((BUFFER_SIZE + 1) * sizeof(char))))
		return (-1);
	// while ((rd = read(fd, line, BUFFER_SIZE)) > 0)
	// {

	// }
}
