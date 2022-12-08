/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:26:17 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/07 21:13:52 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
