/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:00:35 by mvavasso          #+#    #+#             */
/*   Updated: 2022/02/15 00:05:53 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	o_size;
	int	index;

	o_size = size;
	index = 0;
	while (index < o_size)
	{
		while (--size > index)
		{
			if (index >= size)
				break ;
			else if (tab[index] > tab[size])
			{
				temp = tab[index];
				tab[index] = tab[size];
				tab[size] = temp;
			}
		}
		size = o_size;
		index++;
	}
}

