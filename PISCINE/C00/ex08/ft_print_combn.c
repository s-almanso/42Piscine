/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:42:45 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/06 00:03:41 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write(int array[], int n)
{
	int i;
	char	c;

	i = -1;
	while (i < n)
	{
		c = array[i] + '0';
		write (1, &c, n);
		if (array[i] != 10 -n)
			write(1, ", ", 2);
		i++;
	}
}
void ft_rec(int array[], int n, int i)
{
	if (i == 0)
		array[i] = 0;
	else
		array[i] = array[i - 1] + 1;
	while (array[i] < 11 - n + i)
	{
		if (i == n - 1)
			ft_write(array, n);
		else 
			ft_rec(array, n, i + 1);
		array[i] = array[i] + 1;
	}

}

void 	ft_print_combn(int n)
{
	int	array[n];
	ft_rec(array, n, 0);
}

int main(void)
{
	ft_print_combn(2);
	return (0);
} 
