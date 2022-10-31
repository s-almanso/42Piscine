#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a = 420;
	int b = 69;

	char check[6] = {'C', 'h', 'e', 'c', 'k', '!'};
	int i;
	
	printf("%d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
	i = 0;
	if (a == 6 && b == 6)
	{
		while (i < 6)
		{
			ft_putchar(check[i]);
			i++;
		}
	}
	return (0);
}
