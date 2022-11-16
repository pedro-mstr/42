/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:13:15 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/11/10 13:13:19 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* #include<stdio.h>
int main(void)
{
 char str1[] = "ABCDEFG";
 char str2[] = "ABC";
 char str3[] = "EFG";

 printf("%i\n", ft_memcmp(&str1, &str2, 1));
 printf("%i\n", ft_memcmp(&str1, &str3, 1));
} */