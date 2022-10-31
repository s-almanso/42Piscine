#include<unistd.h>

void	ft_ft(int *nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a = -2;
	char check[6] = {'C', 'h', 'e', 'c', 'k', '!'};
	int i;

	ft_ft(&a);
	i = 0;
	if (a == 42)
	{
		while (i < 6)
		{
			ft_putchar(check[i]);
			i++;
		}
	}
	return (0);
}
