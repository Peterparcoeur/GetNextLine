/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbodin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 07:31:06 by pbodin            #+#    #+#             */
/*   Updated: 2020/09/22 07:56:29 by pbodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINE_H
# define LINE_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# define BUFF_SIZE 8
# define FD_SIZE 4096

typedef struct	s_read
{
	int		fd;
	char	*str;
}				t_read;

int				get_next_line(const int fd, char **line);

#endif
