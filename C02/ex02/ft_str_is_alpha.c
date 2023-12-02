/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:29:40 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/13 17:15:50 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d", ft_str_is_alpha("wqdfeqfqw"));
	printf("%d", ft_str_is_alpha("dqwqdw4dq"));
	printf("%d", ft_str_is_alpha("dqw5dw4dq"));
	printf("%d", ft_str_is_alpha("dqwqdw&dq"));
	printf("%d", ft_str_is_alpha("dqwqdwddq"));
	return (0);
}
*/