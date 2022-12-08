/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcosta-s <pcosta-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:44:20 by pcosta-s          #+#    #+#             */
/*   Updated: 2022/12/07 21:15:26 by pcosta-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
