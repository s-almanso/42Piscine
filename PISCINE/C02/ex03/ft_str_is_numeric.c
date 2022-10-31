/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:44:26 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/10 17:08:53 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	y;
	int		i;
	int		x;

	i = 0;
	x = 1;
	while (x == 1)
	{
		y = str[i];
		if (y == '\0')
		{
			x = 1;
			break ;
		}
		if (!(y >= '0' && y <= '9'))
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}
