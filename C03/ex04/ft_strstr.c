/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:36:35 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/17 01:02:24 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
				{
					return (&str[i]);
				}
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	tab[] = "Bonjours tous le monde ca va ?";
	char	tab_key[] = "ond";
	printf("%s\n", ft_strstr(tab, tab_key));
	printf("%s\n", strstr(tab, tab_key));
	return(0);
}
*/