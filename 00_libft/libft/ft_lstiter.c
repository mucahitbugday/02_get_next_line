/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:23:38 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:59:46 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiteri(t_list *lst, void (*f)(unsigned int i, t_list *elem))
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		f(i, lst);
		++i;
		lst = lst->next;
	}
}
