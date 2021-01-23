/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <mtaiar-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:04:44 by mtaiar-s          #+#    #+#             */
/*   Updated: 2020/10/25 12:08:33 by mtaiar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*buff;
	int		ret;
	int		i;

	i = -1;
	if (argc == 3)
	{
		fd = (atoi(argv[1]) == STDIN_FILENO) ? STDIN_FILENO : open(argv[1], O_RDONLY);
		while (++i < atoi(argv[2]))
		{
			ret = get_next_line(fd, &buff);
			if (ret > 0)
			{
				printf("%s\n", buff);
				free(buff);
			}
		}
		close(fd);
	}
}
