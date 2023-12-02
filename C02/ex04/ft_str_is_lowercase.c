/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:30:01 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/13 18:03:28 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d", ft_str_is_lowercase("eqwqweffkospa"));
	printf("%d", ft_str_is_lowercase("eqwq11weffko234spa"));
	printf("%d", ft_str_is_lowercase("e##$@@#$qwq#$weffkospa"));
	printf("%d", ft_str_is_lowercase("eqwqweffQeqw#@$ekospa"));
	printf("%d", ft_str_is_lowercase("QWEQWEeqwqweffkEQWospQWEa"));
	printf("%d", ft_str_is_lowercase("kdowqcnaapqwertuioplkjhgfdsazxcvbn"));
}
*/