#include<unistd.h>

void	ft_swap(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a = 0;
	int b = 42;
	char check[6] = {'C', 'h', 'e', 'c', 'k', '!'};
	int i;

	ft_swap(&a, &b);
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
