/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:21:28 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:59:33 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	t_list	*current;

	if (!lst || !new_lst)
		return ;
	current = *lst;
	if (current == NULL)
		*lst = new_lst;
	else
	{
		current = ft_lstlast(*lst);
		current->next = new_lst;
	}
}
