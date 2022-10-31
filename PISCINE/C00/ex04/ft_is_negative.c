/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:27:12 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/05 21:24:56 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(void)
{
	int	x;

	x = 7;
	while (x < 0)
	{
		write (1, "N", 1);
		break ;
	}
	write (1, "P", 1);
}

int	main(void)
{
	ft_is_negative();
	return (0);
}
