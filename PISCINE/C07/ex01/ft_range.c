/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 23:45:35 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/18 23:58:34 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (max <= min)
		return (0);
	range = (int *)malloc(sizeof(int) * diff);
	if (!range)
		return (0);
	while (i < diff)
	{
		range[i] = min + i;
		i++;                                                                                     
	}
	return (range);
}
