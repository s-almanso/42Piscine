#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int size = 6;
	int check[6] = {33, 107, 99, 101, 104, 67};
	int i;

	ft_rev_int_tab(check, size);
	i = 0;
	while (i < 6)
	{
		ft_putchar(check[i]);
		i++;
	}
	return (0);
}