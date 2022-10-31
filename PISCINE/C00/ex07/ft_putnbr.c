/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:30:29 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/05 22:06:49 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 2147483648)
	{
	   ft_write ('-');
		break;
	}
	if (nb < 0)
	{
		nb = -nb ;
		ft_write ('-');
	}
	if (nb < 10)
	{
		ft_write(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(-42);
	return (0);
}
