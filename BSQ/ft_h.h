/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 03:46:17 by nkiticha          #+#    #+#             */
/*   Updated: 2023/08/02 17:19:48 by nkiticha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	readfile(char *str, char c[3]);
void	ft_print(char **s, int x, int y);
void	split(char *str, char c[3]);
void	show(char **arr, int x, int y, char c[3]);
void	re_arr(char **arr, int x[3], char c);
char	**ft_malloc(int num, char c[3]);
char	**argc_one(void);
char	**argc_more(int argc, char **argv);
char	**ft_rmalloc(int fd, int num, char c[3]);
char	*fd_head(int fd, int fd_rd, char c[3]);
int		len(char *str);
int		isnum(char *str);
int		checkerror(char *str, char *c);
int		cline(char *arr, char c[3]);
int		in_zero(char *arr, int fd);
int		fd_cnt(int fd, int n[2]);
int		check(char **a, int p[4], char e, int n);
int		*solve(char **a, int xy[2], char e, int n);

#endif
