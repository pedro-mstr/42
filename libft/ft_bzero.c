/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:13:06 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/10/28 10:13:15 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}


/*#include<stdio.h>
int main(void)
{
	char str[] = "123456789";
	ft_bzero(&str, 1);
	printf(":%c:\n", str[0]);
	printf(":%c:\n", str[1]);
	printf(":%c:\n", str[2]);
}*/