/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:50:53 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/08 12:02:18 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	src_len;
	char	*new_str;

	if (!s)
		return (NULL);
	src_len = ft_strlen((char *)s);
	if (start > src_len)
		return (ft_calloc(1, 1));
	if (start + len > src_len)
		len = src_len - start;
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len && start < src_len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* #include <stdio.h>

void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
	int		start;
	size_t	len;
	char	*string;
	char	*new_string;

	start = 3;
	len = 6;
	string = "42 Lisboa";
	new_string = ft_substr(string, start, len);
	printf("%s\n", new_string);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = (nmemb * size);
	if (total_size > 2147483647)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
} */
