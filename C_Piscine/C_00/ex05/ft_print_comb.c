/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:02:45 by mbugday           #+#    #+#             */
/*   Updated: 2021/10/16 12:02:48 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

int	g_i[3];

void	ft_commas2(void)
{
	ft_putchar(g_i[0]);
	ft_putchar(g_i[1]);
	ft_putchar(g_i[2]);
}

void	ft_print_comb(void)
{
	g_i[0] = '0';
	while (g_i[0] <= '9')
	{
		g_i[1] = '0';
		while (g_i[1] <= '9')
		{
			g_i[2] = '0';
			while (g_i[2] <= '9')
			{
				if (g_i[0] < g_i[1] && g_i[1] < g_i[2])
				{
					ft_commas2();
					if (!(g_i[0] == '7' && g_i[1] == '8' && g_i[2] == '9'))
						ft_commas();
				}
				g_i[2]++;
			}
			g_i[1]++;
		}
		g_i[0]++;
	}
}
