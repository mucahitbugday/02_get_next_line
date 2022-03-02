char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	sayac;

	i = 0;
	sayac = 0;
	while (dest[sayac])
		sayac++;
	while (src[i])
	{
		dest[sayac] = src[i];
		sayac++;
		i++;
	}
	dest[sayac] = '\0';
	return (dest);
}
