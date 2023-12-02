/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:08:33 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/13 18:17:50 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d", ft_str_is_uppercase("QQWDQWDQWMCCBHAIAZOPKNEBAUQEUR"));
	printf("%d", ft_str_is_uppercase("QQWDQWDQW3MCC2UQEUR"));
	printf("%d", ft_str_is_uppercase("QQWDQWDQWM0CCBHAIAZOPKNEBAUQEUR"));
	printf("%d", ft_str_is_uppercase("QQWDQWDQWMC$CBHAIAZOPKNEBAUQEUR"));
	printf("%d", ft_str_is_uppercase("QQWDQWDQWMCCiBHAIAZOPKNEBAUQEUR"));
	printf("%d", ft_str_is_uppercase("QWERTYUIOPLKJHGFDSAZXCVBNM"));
	return (0);
}
*/