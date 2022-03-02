unsigned int	ft_strlen(char *str)
{
	unsigned int	sayac;

	sayac = 0;
	while (*str != '\0')
	{
		sayac++;
		str++;
	}
	return (sayac);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	a = ft_strlen(dest);
	b = 0;
	while (src[b] != '\0' && a + 1 < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[b]));
}
