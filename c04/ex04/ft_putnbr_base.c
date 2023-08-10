/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:43:26 by fatkeski          #+#    #+#             */
/*   Updated: 2023/07/29 19:48:11 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	base_error(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	len;
	long	error;
	long	nb;

	nb = nbr;
	error = base_error(base);
	if (error == 1)
	{
		len = ft_strlen(base);
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb / len != 0)
		{
			ft_putnbr_base((nb / len), base);
			ft_putnbr_base((nb % len), base);
		}
		else
			write(1, &base[nb], 1);
	}
}
