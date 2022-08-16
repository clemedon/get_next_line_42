/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:00:00 by cvidon            #+#    #+#             */
/*   Updated: 2022/08/15 18:00:00 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
 ** =========[ Includes ]==========
 */

/* get_next_line */

# include <unistd.h>
# include <stdlib.h>

/*
 ** =========[ Defines ]===========
 */

/*
 ** @brief      The minimum amount of characters (bytes) read by one
 **             get_next_line call on the given file descriptor.
 */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/*
 ** @brief      The maximum number of file that can be read simultaneously by
 **             get_next_line.
 */

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

/*
 ** =========[ Prototypes ]========
 */

char	*get_next_line(int fd);

/*
 ** get_next_line_utils.c
 */

size_t	ft_has_nl(char const *str);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char const *s1);
char	*ft_strjoin_free_s1(char *s1, char const *s2);
char	*ft_substr(char const *str, unsigned int start, size_t size);

/*
 ** get_next_line.c
 */

/* static char *ft_newline(char const *temp) */
/* static char *ft_newtemp(char *temp) */
char	*get_next_line(int fd);

#endif
