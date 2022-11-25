/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:16:28 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/11/24 22:47:37 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include<stdio.h>
void	ft_f(unsigned int i, char *str)
{
	printf("At str[%i] function gets :%c:\n",i,*str);
}
int	main(void)
{
	char str[] = "42 Lisboa";
	ft_striteri(str, ft_f);
	printf("\n:%s:\n",str);
	return (0);
} */