/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:05:35 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/13 19:21:01 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
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
	printf("%d", ft_str_is_printable("wdqewfggqwdqwd"));
	printf("%d", ft_str_is_printable("wdqewf213809241ggqwdqwd"));
	printf("%d", ft_str_is_printable("wdqewfggqwdq*((&**^*!@$wd"));
	printf("%d", ft_str_is_printable("wdqewfQDDwqd22*!#)(!#ggqwdqwd"));
	printf("%d", ft_str_is_printable("\t"));
	printf("%d", ft_str_is_printable("\b"));
}
*/
