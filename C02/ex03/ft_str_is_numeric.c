/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:52:44 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/13 17:17:10 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	printf("%d", ft_str_is_numeric("32446725"));
	printf("%d", ft_str_is_numeric("3244rqd6725"));
	printf("%d", ft_str_is_numeric("244qwd67qwd25"));
	printf("%d", ft_str_is_numeric("3244*&6725"));
	printf("%d", ft_str_is_numeric("324467234292592385238582355"));
	return(0);
}
*/