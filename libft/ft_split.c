/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:44:08 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/01 14:30:02 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ptr_count(char const *str, char delimiter)
{
	size_t	ptr_count;

	ptr_count = 0;
	while (*str && *str == delimiter)
		str++;
	while (*str)
	{
		ptr_count++;
		while (*str && *str != delimiter)
			str++;
		while (*str && *str == delimiter)
			str++;
	}
	return (ptr_count);
}

char	*ft_str_copy(char const *str, size_t size)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = malloc((size + 1) * sizeof(char));
	if (!new_str)
		return (0);
	while (i < size)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**array_str;
	size_t	ptr_count;
	size_t	i;

	if (!s)
		return (0);
	ptr_count = ft_ptr_count(s, c);
	array_str = malloc((ptr_count + 1) * sizeof(char *));
	if (!array_str)
		return (0);
	while (*s)
	{
		if (*s && *s != c)
		{
			i = 0;
			while (s[i] && s[i] != c)
				i++;
			*(array_str++) = ft_str_copy(s, i);
			s += i;
		}
		else
			s++;
	}
	*array_str = '\0';
	return (array_str - ptr_count);
}

#include <stdio.h>
int	main()
{
	int		i = 0;
	char	**array_str = ft_split("pcosta-s @ 42 Lisboa", ' ');
	while (array_str[i])
		printf("%s\n", array_str[i++]); 
	return (0);
}
