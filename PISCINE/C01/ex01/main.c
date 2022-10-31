#include<unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a	= -2;
	int *p0;
	int **p1;
	int ***p2;
	int ****p3;
	int *****p4;
	int ******p5;
	int *******p6;
	int ********p7;

	p0 = &a;
	p1 = &p0;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;

	char check[6] = {'C', 'h', 'e', 'c', 'k', '!'};
	int i;

	ft_ultimate_ft(&p7);
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
