/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:26:16 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/11/19 16:33:59 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/**
 * This function takes a string and returns the length of the string
 * @param str This is the string that we are going to find the length of.
 * @return The length of the string.
 */
size_t		ft_strlen(const char *str);
/**
 * It copies the string src to the end of dest,but never more
 * than size - 1 characters, and always NUL-terminates the result
 * @param dest This is the destination string.
 * @param src The string to be appended.
 * @param size the size of the destination buffer
 * @return The length of the string it tried to create.
 */
size_t		ft_strlcat(char *dest, const char *src, size_t size);
/**
 * Copy the string pointed to by src, including the terminating
 * null byte ('\0'), to the buffer pointed to by dst.
 * @param dst The destination string.
 * @param src The string to be copied.
 * @param dstsize The size of the destination buffer.
 * @return The length of the string src.
 */
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * The strstr() function locates the first occurrence of the 
 * null-terminated string little in the null-terminated string big.
 * @param big the string to search in
 * @param little the string to find
 * @param len the maximum number of characters to search
 * @return A pointer to the first occurrence of the substring
 * little in the string big, or NULL if the substring is not found.
 */
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
/**
 * It returns a pointer to the first occurrence
 * of the character c in the string s.
 * @param s The string to search.
 * @param c The character to search for.
 * @return A pointer to the first occurrence of the character c in the string s.
 */
char		*ft_strchr(const char *s, int c);
/**
 * It takes a string and returns the number it represents
 * @param str The string to be converted.
 * @return the number of characters that precede the terminating null character
 * in the string pointed to by s.
 */
int			ft_atoi(const char *str);
/**
 * The function ft_isalpha() returns 1 if the character passed as an argument
 * is an alphabetic character, and 0 if it is not
 * @param c The character to be checked.
 * @return 1 if the character is a letter, 0 if not.
 */
int			ft_isalpha(int c);
/**
 * It checks if the character is a digit.
 * @param c The character to be checked.
 * @return 1 if the character is a digit, 0 if not.
 */
int			ft_isdigit(int c);
/**
 * If the character is a number or a letter, return 1, otherwise return 0
 * @param c The character to be checked.
 * @return 1 if the character is alphanumeric, 0 if not.
 */
int			ft_isalnum(int c);
/**
 * The function ft_isascii() checks if the passed character is an ASCII character
 * @param c The character to be checked.
 * @return 1 if c is between 0 and 127, 0 otherwise.
 */
int			ft_isascii(int c);
/**
 * If the character is between 32 and 126, return 1, otherwise return 0
 * @param c The character to be checked.
 * @return 1 if c is a printable character, 0 otherwise.
 */
int			ft_isprint(int c);
/**
 * If the character is lowercase, subtract 32 from it
 * @param c The character to be converted.
 * @return the uppercase equivalent of the character passed as an argument
 * , if the argument is a lowercase letter.
 */
int			ft_toupper(int c);
/**
 * If the character is uppercase, add 32 to it
 * @param c The character to be converted.
 * @return The lowercase version of the character.
 */
int			ft_tolower(int c);
/**
 * It compares the first n bytes of memory area s1
 * against the first n bytes of memory area s2.
 * @param s1 This is the first string to be compared.
 * @param s2 The string to be compared.
 * @param n The number of bytes to compare.
 * @return The difference between the first two different bytes.
 */
int			ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * If the destination is before the source, copy the source to the destination.
 * If the destination is after the source, copy the source to the destination
 * in reverse.
 * @param dest This is the pointer to the destination array where the content
 * is to be copied, type-casted to a pointer of type void*.
 * @param src The source string.
 * @param n the number of bytes to copy
 * @return A pointer to the destination string.
 */
void		*ft_memmove(void *dest, const void *src, size_t n);
/**
 * Ft_bzero() takes a pointer to a memory area
 * and a size in bytes and sets all bytes to zero.
 * @param s This is the pointer to the memory that needs to be filled with zeros.
 * @param n The number of bytes to be set to zero.
 */
void		ft_bzero(void *s, size_t n);
/**
 * Copy n bytes from memory area src to memory area dst
 * @param dst This is the pointer to the destination array where the content
 * is to be copied, type-casted to a pointer of type void*.
 * @param src The source string.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination string.
 */
void		*ft_memcpy(void *dst, const void *src, size_t n);
/**
 * It allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 * @param nmemb The number of elements to be allocated.
 * @param size The number of elements to be allocated.
 * @return A pointer to the allocated memory.
 */
void		*ft_calloc(size_t nmemb, size_t size);
/**
 * The function ft_memchr() locates the first occurrence of c
 * (converted to an unsigned char) in string s.
 * @param s This is the pointer to the first byte of memory to be scanned.
 * @param c The character to search for.
 * @param n The number of bytes to be searched.
 * @return A pointer to the first occurrence of the character c
 * in the first n bytes of the string pointed to, by the argument s.
 */
void		*ft_memchr(const void *s, int c, size_t n);
/**
 * The above function returns a pointer to the last occurrence
 * of the character c in the string s.
 * @param s The string to search.
 * @param c The character to search for.
 * @return A pointer to the last occurrence of the character c in the string s.
 */
char		*ft_strrchr(const char *s, int c);
/**
 * The function ft_memset() takes a pointer to a memory location, a value,
 * and a number of bytes to fill, and fills the memory with the value
 * @param b This is the pointer to the memory area to be filled.
 * @param c The character to fill the memory with.
 * @param len the number of bytes to be set to the value c
 * @return The address of the first byte of the memory area b.
 */
void		*ft_memset(void *b, int c, size_t len);
/**
 * It copies the string s1 into a newly allocated string.
 * @param s1 The string to be copied.
 * @return A pointer to a new string which is a duplicate of the string s1.
 */
char		*ft_strdup(const char *s1);
/**
 * The function compares the first n characters of the strings s1 and s2
 * @param s1 The first string to be compared.
 * @param s2 The string to compare to.
 * @param n The maximum number of characters to compare.
 * @return The difference between the first two characters that differ
 * in the strings s1 and s2.
 */
int			ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * Write the character c to the file descriptor fd (0, 1, 2).
 * @param c The character to print.
 * @param fd File descriptor:
 * @param 0	Standard input - keyboard.
 * @param 1 Standard output - terminal.
 * @param 2 Standard error (diagnostic) output.
 */
void		ft_putchar_fd(char c, int fd);
/**
 * Write the string c to the file descriptor fd (0, 1, 2).
 * @param c The string to print.
 * @param fd File descriptor:
 * @param 0	Standard input - keyboard.
 * @param 1 Standard output - terminal.
 * @param 2 Standard error (diagnostic) output.
 */
void		ft_putstr_fd(char const *s, int fd);
/**
 * Write the string s to the file descriptor fd, followed by a newline.
 * @param s The string to output.
 * @param fd File descriptor:
 * @param 0	Standard input - keyboard.
 * @param 1 Standard output - terminal.
 * @param 2 Standard error (diagnostic) output.
 */
void		ft_putendl_fd(char const *s, int fd);
/**
 * Iterate through the string s, passing the index and 
 * the address of each character to the function f.
 * @param s The string to iterate through
 * @param f The function to be applied to each character.
 */
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
/**
 * Ft_substr() returns a pointer to a new string which is a substring of t
 * he string 's' starting at index 'start' and of length 'len'.
 * @param s The string to be split.
 * @param start the index of the first character to include in the substring.
 * @param len the maximum number of characters to copy
 * @return A pointer to a new string, or FALSE on failure, or an empty string.
 */
char		*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * Applies the function f to each character of the string passed as argument
 * by giving its index as first argument to create a “fresh” new string
 * (with malloc(3)) resulting from the successive applications of f.
 * @param s The string to be mapped.
 * @param f The function to be applied to each character of s and its index.
 * @return A pointer to a new string.
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * This function takes two strings and returns a new string 
 * that is the concatenation of the two strings
 * @param s1 The first string to be joined.
 * @param s2 The string to be appended to the end of s1.
 * @return A pointer to a new string that is the concatenation of s1 and s2.
 */
char		*ft_strjoin(char const *s1, char const *s2);
/**
 * Write the string s to the file descriptor fd
 * @param s The string to output.
 * @param fd The file descriptor of the file to write to.
 */
void		ft_putstr_fd(char const *s, int fd);
/**
 * Write the number n to the file descriptor fd
 * @param n The number to be printed.
 * @param fd The file descriptor of the file to write to.
 */
void		ft_putnbr_fd(int n, int fd);
/**
 * It takes an integer and returns a string representation of that integer
 * @param a the number to be converted to a string
 * @return A string of the number passed in.
 */
char		*ft_itoa(int a);
#endif
