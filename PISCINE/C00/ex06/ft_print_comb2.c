/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:30:09 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/05 23:13:33 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_write (x / 10 + '0');
			ft_write (x % 10 + '0');
			ft_write (' ');
			ft_write (y / 10 + '0');
			ft_write (y % 10 + '0');
			if ((x / 10 != 9) || (x % 10 != 8))
			{
				ft_write (',');
				ft_write (' ');
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
