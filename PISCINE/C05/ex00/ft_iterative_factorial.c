/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:52:24 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/15 20:54:47 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	f;
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	f = 1;
	while (i <= nb)
		f = f * i++;
	return (f);
}
