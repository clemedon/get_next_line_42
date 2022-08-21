/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:00:00 by cvidon            #+#    #+#             */
/*   Updated: 2022/08/15 18:00:00 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

/*
 ** @brief      Read the given file and output its content on STDOUT line by
 **             line.
 */

#include "get_next_line.h"

int main(void)
{
    int     fd;
    char    *ret;

    fd = open("Makefile", O_RDONLY);

    while (1)
    {
        ret = get_next_line(fd);
        if (!ret)
            break ;
        write (1, ret, ft_strlen(ret));
        free(ret);
    }
}


/* int	main(int ac, char **av) */
/* { */
/* 	int		fd; */
/* 	char	*line; */

/* 	(void)ac; */
/* 	if (ac != 2) */
/* 		return (write (2, "Usage: ./get_next_line <path_to_file>\n", 38), 1); */
/* 	if (ft_strlen(av[1]) >= 100) */
/* 	{ */
/* 		write (2, "get_next_line: \033[31mFile name too long\033[0m\n", 44); */
/* 		return (1); */
/* 	} */
/* 	fd = open(av[1], O_RDONLY); */
/* 	if (fd == -1) */
/* 		write (2, "get_next_line: \033[31mFile warning\033[0m\n", 37); */
/* 	while (42) */
/* 	{ */
/* 		line = get_next_line(fd); */
/* 		if (!line) */
/* 		{ */
/* 			write (2, "get_next_line: \033[32mDone\033[0m\n", 29); */
/* 			return (0); */
/* 		} */
/* 		write (1, line, ft_strlen (line)); */
/* 		free (line); */
/* 	} */
/* } */