/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:21:31 by fatkeski          #+#    #+#             */
/*   Updated: 2023/07/29 14:40:09 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	count;
	int	sign;

	i = 0;
	count = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)
		|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	sign = 1;
	if (count % 2 == 1)
		sign = -1;
	result = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

int main()
{
	char *s = "   --+---+0ab567";
	printf("%d", ft_atoi(s));
}
