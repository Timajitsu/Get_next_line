/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taliza <taliza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:04:12 by taliza            #+#    #+#             */
/*   Updated: 2021/12/13 15:04:14 by taliza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_read_to_left_str(int fd, char *left_str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *let_str, char *buff);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *lest_str);
char	*ft_new_left_str(char *left_str);

#endif //GET_NEXT_LINE_H
