/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:22:31 by mbugday           #+#    #+#             */
/*   Updated: 2021/10/22 10:22:33 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*cp;

	i = 0;
	while (src[i])
	{
		i++;
	}
	cp = (char *)malloc(sizeof(char) * i + 1);
	if (cp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
