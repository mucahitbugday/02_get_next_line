/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:18:59 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:42:41 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr_s;

	ptr_s = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(ptr_s + i) == (char)c)
			return (ptr_s + i);
		i--;
	}
	if (c == '\0')
		return (ptr_s + ft_strlen(s) + 1);
	return (NULL);
}
