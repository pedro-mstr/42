/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:27:13 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/10/28 11:27:22 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[i]);
	if (len == 0)
		return (NULL);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
