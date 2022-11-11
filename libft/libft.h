/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:26:16 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/10/27 11:26:20 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		t_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
/**
 * It takes a string and returns the number it represents
 * 
 * @param str The string to be converted.
 * 
 * @return the number of characters that precede the terminating null character in the string pointed
 * to by s.
 */
long		ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
/**
 * If the character is a number or a letter, return 1, otherwise return 0
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is alphanumeric, 0 if not.
 */
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
/**
 * Ft_bzero() takes a pointer to a memory area and a size in bytes and sets all bytes to zero
 * 
 * @param s This is the pointer to the memory that needs to be filled with zeros.
 * @param n The number of bytes to be set to zero.
 */
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * It allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the
 * allocated memory. The memory is set to zero.
 * 
 * @param nmemb The number of elements to be allocated.
 * @param size The number of elements to be allocated.
 * 
 * @return A pointer to the allocated memory.
 */
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
#endif
