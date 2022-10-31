/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:18:08 by salmanso          #+#    #+#             */
/*   Updated: 2021/11/10 16:57:59 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		s;

	i = 0;
	if (size < 2)
	{
		return ;
	}
	while (i <= (size / 2))
	{
		s = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = s;
		i++;
	}
}
