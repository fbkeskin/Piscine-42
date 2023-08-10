/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:19:37 by fatkeski          #+#    #+#             */
/*   Updated: 2023/07/26 15:19:04 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < (n - 1))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (s1[i] < s2[i])
		return (-1);
	else if (s1[i] > s2[i])
		return (1);
	return (0);
}
