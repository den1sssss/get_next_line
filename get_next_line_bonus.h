/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:26:41 by dshirely          #+#    #+#             */
/*   Updated: 2021/12/01 22:11:26 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

int		ft_strlen(char *str);
int		indexkek(char *str);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *str, char *kek);
char	*perdelstr(char *str);
char	*ostatok(char *str, int fd);
char	*strochka(char *str);
char	*get_next_line(int fd);

#endif
