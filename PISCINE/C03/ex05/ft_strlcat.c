unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int x;
	int y;
	
	y = 0;
	i = 0;
	x = 0;
	while (src[y])
		y++;
	while (dest[x] && x < size)
		x++;
	i = x;
	while (src[x-i] &&  x < size)
	{
		dest[x] = src[x-i];
		x++;
	}
	if (i < size)
		dest[x] = '\0';
	return (x);
}
