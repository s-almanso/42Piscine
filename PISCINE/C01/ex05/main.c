#include<unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char check[6] = {'C', 'h', 'e', 'c', 'k', '!'};

	ft_putstr(check);
	return (0);
}
