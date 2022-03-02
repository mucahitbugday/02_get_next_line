/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:21:25 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:42:33 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dizi, const char *ara, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (*ara == 0)
		return ((char *)dizi);
	while (dizi[x] != 0 && x < len)
	{
		y = 0;
		while (dizi[x + y] == ara[y]
			&& ara[y] != 0 && y + x < len)
			y++;
		if (!ara[y])
			return ((char *)&dizi[x]);
		x++;
	}
	return (NULL);
}
