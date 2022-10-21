/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:57:26 by ebelfkih          #+#    #+#             */
/*   Updated: 2022/10/21 15:05:51 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<xlocale.h>
# include<ctype.h>

int			ft_isalnum(int c);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_strlen(const char *s);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
char		*strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		ft_tolower(int c);
char		ft_toupper(int c);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
const char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif