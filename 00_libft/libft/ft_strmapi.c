/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:44:52 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:42:11 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *src, char (*f)(unsigned int, char))
{
	char	*src_ptr;
	int		src_len;
	int		i;

	i = 0;
	if (!src)
		return (0);
	src_len = ft_strlen(src);
	src_ptr = (char *) malloc((src_len + 1) * sizeof(char));
	if (!src_ptr)
		return (0);
	while (i < src_len)
	{
		src_ptr[i] = f(i, (char )(src[i]));
		i++;
	}
	src_ptr[i] = '\0';
	return (src_ptr);
}
