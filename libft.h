/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <jparejo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:49:10 by jparejo-          #+#    #+#             */
/*   Updated: 2021/10/07 13:59:04 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>


int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isascii(int c);

int			ft_isprint(int c);

size_t		ft_strlen(const char *s);

void		*ft_memset(void *str, int c, size_t l);

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *str1, const void *str2, size_t n);

void		*ft_memmove(void *s1, const void *s2, size_t n);

size_t		ft_strlcpy(char *destination, const char *source, size_t size);

size_t		ft_strlcat(char *dest, const char *src, size_t size);

int			ft_toupper(int ch);

int			ft_tolower(int ch);

char		*ft_strchr(const char *str, int c);

char		*ft_strrchr(const char *str, int c);

char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

int			ft_strncmp(const char *str1, const char *str2, size_t n);

void		*ft_memchr(const void *str, int c, size_t n);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

int			ft_atoi(const char *str);

void		*ft_calloc (size_t num, size_t size);

char		*ft_strdup(const char *src);

char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s1, char const *set);

char		**ft_split(const char *s, char c);

char		*ft_itoa(int n);

void		ft_putchar_fd(char c, int fd);

void		ft_putendl_fd(char *s, int fd);

void 		ft_putnbr_fd(int n, int fd);

void		ft_putstr_fd(char *s, int fd);

void		ft_striteri(char *s, void (*f)(unsigned int, char*));

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
                        
#endif