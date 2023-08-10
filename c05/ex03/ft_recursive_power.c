/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:02:09 by fatkeski          #+#    #+#             */
/*   Updated: 2023/07/30 17:08:06 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	if (power > 0)
		return ((nb) * (ft_recursive_power(nb, (power - 1))));
	return (0);
}
