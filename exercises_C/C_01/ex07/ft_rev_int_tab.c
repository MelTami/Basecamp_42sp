/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:39:55 by mvavasso          #+#    #+#             */
/*   Updated: 2022/02/09 15:38:09 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	value;
	int	i;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		value = tab[i];
		tab[i] = tab[size];
		tab[size] = value;
		i++;
		size--;
	}
}
