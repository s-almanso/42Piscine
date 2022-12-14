/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:38:32 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/10 18:28:33 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			break ;
		}
		if (!((y >= 'A' && y <= 'Z') || (y >= 'a' && y <= 'z')))
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}
