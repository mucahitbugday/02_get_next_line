/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:19:23 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:42:24 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((*(s1 + i) == *(s2 + i)) && *(s1 + i) && *(s2 + i) && (i < n - 1))
		i++;
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
