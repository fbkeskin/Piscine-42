/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:11:56 by fatkeski          #+#    #+#             */
/*   Updated: 2023/07/25 16:26:04 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
		{
			if (!(str[i - 1] >= 97 && str[i - 1] <= 122))
			{
				if (!(str[i - 1] >= 48 && str[i - 1] <= 57))
				{
					if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
