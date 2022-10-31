#include<unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a = 420;
	int b = 69;
	int div;
	int mod;

	char check[6] = {'C', 'h', 'e', 'c', 'k', '!'};
	int i;

	ft_div_mod(a, b, &div, &mod);
	i = 0;
	if (div == 6 && mod == 6)
	{
		while (i < 6)
		{
			ft_putchar(check[i]);
			i++;
		}
	}
	return (0);
}
