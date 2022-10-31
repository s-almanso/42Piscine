/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:07:40 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/19 00:13:24 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ar;
	int	i;
	int	diff;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = 0;
		return (0);
	}
	ar = (int *)malloc(sizeof(int) * diff);
	if (!ar)
		return (-1);
	while (i < diff)
	{
		ar[i] = min + i;
		i++;
	}
	*range = ar;
	return (diff);
}
