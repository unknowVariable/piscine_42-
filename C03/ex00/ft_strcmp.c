/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:51:43 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/18 17:28:56 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char tab[] = "Hello";
	char tab2[] = "Hello World";
	char tab3[] = "Hello u";
	printf("%d\n", ft_strcmp(tab, tab2));
	printf("%d\n", ft_strcmp(tab2, tab));
	printf("%d\n", strcmp(tab, tab2));
	printf("%d\n", strcmp(tab2, tab));
	printf("%d\n", ft_strcmp(tab2, tab3));
	printf("%d\n", strcmp(tab2, tab3));
	return (0);
}
*/
