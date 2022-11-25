/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:58:14 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/11/25 08:58:16 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrcount(int a)
{
	size_t	len;

	len = 0;
	if (a == 0)
		len++;
	if (a < 0)
	{
		a *= -1;
		len++;
	}
	while (a)
	{
		a /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int a)
{
	char		*str;
	size_t		len;
	long int	nb;

	nb = a;
	len = ft_nbrcount(nb);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (a == 0)
		str[0] = 48;
	str[len--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len--] = 48 + nb % 10;
		nb /= 10;
	}
	return (str);
}

/* int main()
{
  int number0 = 0;
  int number1 = -12345;
  int number2 = 12345;
  printf("%s\n",ft_itoa(number0));
  printf("%s\n",ft_itoa(number1));
  printf("%s\n",ft_itoa(number2));
  return(0);
} */