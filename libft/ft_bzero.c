/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:13:06 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/07 21:14:44 by pcosta-s         ###   ########.fr       */
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
