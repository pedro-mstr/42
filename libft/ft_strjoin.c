/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:01:18 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/11/25 09:01:20 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes two strings and returns a new string 
 * that is the concatenation of the two strings
 * @param s1 The first string to be joined.
 * @param s2 The string to be appended to the end of s1.
 * @return A pointer to a new string that is the concatenation of s1 and s2.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		iter;

	i = 0;
	iter = 0;
	new_string = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_string)
		return (NULL);
	while (s1[i])
		new_string[iter++] = s1[i++];
	i = 0;
	while (s2[i])
		new_string[iter++] = s2[i++];
	new_string[iter] = '\0';
	return (new_string);
}
