/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:00:02 by ascordil          #+#    #+#             */
/*   Updated: 2024/12/12 16:20:21 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# define _BHMIN_  "0123456789abcdef"
# define _BHMAJ_  "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
int		format_parser(char letter, va_list *li);
int		handle_ptr(va_list *li);
int		ft_putstr(char *str);
int		ft_putchar(char letter);
int		ft_putnbr(int nb);
int		ft_putnbrhex(unsigned int nb, char *base);
int		ft_putnbr_ptr_hex(unsigned long nb, char *base);
int		ft_putnbr_unsigned(unsigned int nb);
int		ft_isalnum(int character);
int		ft_toupper(int character);
int		ft_tolower(int character);
int		ft_isalpha(int character);
int		ft_isascii(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
int		ft_strncmp(const char *first, const char *second, size_t length);
int		ft_atoi(const char *theString);
long	ft_atol(const char *theString);
int		ft_memcmp(const void *b1, const void *b2, size_t len);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *b, int c, size_t len);
void	*ft_calloc(size_t number, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_bzero(void *b, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *theString);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *string, int searchedChar);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strrchr(const char *string, int searchedChar);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strdup(const char *str);
#endif
