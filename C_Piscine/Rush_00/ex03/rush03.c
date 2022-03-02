void	ft_putchar(char c);

void	yaz(int x, int sol, int orta, int sag)
{
	ft_putchar(sol);
	while (x > 2)
	{
		ft_putchar(orta);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(sag);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		yaz(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			yaz(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			yaz(x, 'A', 'B', 'C');
		}
	}
}
