/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:39:10 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/10 12:57:18 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;

	new_list = NULL;
	temp = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}

/*  #include <stdio.h>

void	free_function(void *content);
void	*apply_function(void *content);
t_list	*ft_lstnew(void *content);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);

int	main(void)
{
	int		a;
	int		b;
	t_list	*list1;
	t_list	*list2;
	t_list	*new_list;
	t_list 	*temp;

	a = 21;
	b = 210;
	list1 = ft_lstnew(&a);
	list2 = ft_lstnew(&b);
	list1->next = list2;
	temp = list1;
	while (temp != NULL)
	{
		printf("%d ", *((int *)(temp->content)));
		temp = temp->next;
	}
	printf("\n");
	new_list = ft_lstmap(list1, apply_function, free_function);
	while (new_list)
	{
		printf("%d ", *((int *)(new_list->content)));
		new_list = new_list->next;
	}
	printf("\n");
	ft_lstclear(&new_list, free_function);
	return (0);
}


void	*apply_function(void *content)
{
	int	*new_int;

	new_int = malloc(sizeof(int));
	if (new_int == NULL)
		return (NULL);
	*new_int = *((int *)content) * 2;
	return (new_int);
}

void	free_function(void *content)
{
	free(content);
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

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, (del));
		*lst = temp;
	}
	*lst = NULL;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(del)(lst->content);
	free (lst);
	lst = NULL;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}  */