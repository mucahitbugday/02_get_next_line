/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:22:42 by mbugday           #+#    #+#             */
/*   Updated: 2021/10/22 10:22:44 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p_j;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	p_j = (int *)malloc((sizeof(int)) * (max - min) + 1);
	if (p_j == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		p_j[i] = min;
		min++;
		i++;
	}
	return (p_j);
}
