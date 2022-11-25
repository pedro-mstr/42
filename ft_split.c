/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:44:08 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/11/25 10:44:10 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		size;
	int		i;
	char	*line;

	size = 0;
	i = 0;
	line = NULL;
	while (*s && *s == c)
		s++;
	while (s[size] && s[size != c])
		size++;

}
