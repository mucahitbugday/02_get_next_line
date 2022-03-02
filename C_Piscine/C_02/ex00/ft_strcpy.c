char	*ft_strcpy(char *d1, char *d2)
{
	int	c;

	c = 0;
	while (d2[c] != '\0')
	{
		d1[c] = d2[c];
		c++;
	}
	d1[c] = '\0';
	return (d1);
}
