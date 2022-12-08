/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:02:57 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/07 21:17:22 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_start(char const *s1, char const *set, size_t	set_pos)
{
	size_t	set_len;
	size_t	s1_start;

	s1_start = 0;
	set_len = ft_strlen(set);
	while (set_pos <= set_len)
	{
		if (s1[s1_start] == set[set_pos])
		{
			s1_start++;
			set_pos = 0;
		}
		if (s1[s1_start] != set[set_pos])
			set_pos++;
	}
	return (s1_start);
}

size_t	ft_end(char const *s1, char const *set, size_t	set_pos)
{
	size_t	s1_end;
	size_t	set_len;
	size_t	s1_len;

	s1_end = 0;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	while (set_pos <= set_len)
	{
		if (s1[s1_len - 1] == set[set_pos])
		{
			s1_len--;
			s1_end++;
			set_pos = 0;
		}
		if (s1[s1_len - 1] != set[set_pos])
			set_pos++;
	}
	return (s1_end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_end;
	size_t	s1_start;
	size_t	set_pos;

	set_pos = 0;
	s1_start = ft_start(s1, set, set_pos);
	s1_end = ft_end(s1, set, set_pos);
	return (ft_substr(s1, s1_start, ft_strlen(s1) - s1_start - s1_end));
}
