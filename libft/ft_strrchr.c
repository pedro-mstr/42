/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:20:59 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/07 21:11:43 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		i;

	s1 = ((char *)s);
	i = ft_strlen(s1);
	while (i >= 0)
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i--;
	}
	return (NULL);
}
