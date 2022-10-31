#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str);

int	main(void)
{
	int i = 0;
	char check[6] = {'C', 'h', 'e', 'c', 'k', '!'};

	if (ft_strlen(check) == 6)
	{
		while (i < 6)
		{
			ft_putchar(check[i]);
			i++;
		}
	}
	return (0);
}