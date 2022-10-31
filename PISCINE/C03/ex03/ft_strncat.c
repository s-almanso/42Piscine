char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int x;
		
	i = 0;
	x = 0;
	while (dest[i] != '\0' )
	{
		x++;
		i++;
	}
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}
