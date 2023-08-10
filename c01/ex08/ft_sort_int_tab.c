/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:50:49 by fatkeski          #+#    #+#             */
/*   Updated: 2023/07/20 21:13:01 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - i)
		{
			if (tab[j] < tab[j - 1])
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
