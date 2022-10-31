/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:32:52 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/06 16:31:40 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7')
		return;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a != b && b != c && a != c && c > b && b > a)
					ft_write (a, b, c);
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
