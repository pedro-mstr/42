/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:19:34 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/10 12:38:17 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		list_size;
	t_list	*temp;

	temp = lst;
	list_size = 0;
	while (temp)
	{
		temp = temp -> next;
		list_size++;
	}
	return (list_size);
}

/* #include <stdio.h>

t_list	*ft_lstnew(void *content);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);

int	main(void)
{
	t_list	*l;
	int		actual;
	int		expected;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("2"));
	l->next->next = ft_lstnew(ft_strdup("3"));
	expected = 3;
	actual = ft_lstsize(l);
	if (actual == expected)
		printf("TEST_SUCCESS: (%d,%d)\n", expected, actual);
	else
		printf("TEST_FAILED: (%d,%d)\n", expected, actual);
	return (0);
}

t_list	*ft_lstnew(void *content)
{
	t_list		*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list -> content = content;
	new_list -> next = NULL;
	return (new_list);
}

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
} */
