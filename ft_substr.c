/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:50:53 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/11/21 09:50:54 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	src_len;
	char	*str;

	if (!s)
		return (NULL);
	src_len = ft_strlen((char *)s);
	if (start > src_len)
		return (ft_calloc(1, 1));
	if (start + len > src_len)
		len = src_len - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len && start < src_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int main()
{
    char str[] = "42 Lisboa";
    printf("New String: :%s\:n",ft_substr(str,3,6));
    return(0);
} */