/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:28:57 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/15 01:16:37 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] && s2[i] && (i + 1) < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	tab[] = "Hermione";
	char	tab2[] = "HermioneF";
	char	tab3[] = "Hermione";
	char	tab4[] = "";
	printf("%d\n", ft_strncmp(tab, tab2, 9));
	printf("%d\n", ft_strncmp(tab2, tab, 9));
	printf("%d\n", ft_strncmp(tab, tab3, 8));
	printf("%d\n", ft_strncmp(tab4, tab4, 5));
	printf("%d\n", ft_strncmp(tab4, tab2, 5));
	printf("%d\n\n\n", ft_strncmp(tab2, tab4, 5));
	printf("%d\n", strncmp(tab, tab2, 9));
	printf("%d\n", strncmp(tab2, tab, 9));
	printf("%d\n", strncmp(tab, tab3, 8));
	printf("%d\n", strncmp(tab4, tab4, 5));
	printf("%d\n", strncmp(tab4, tab2, 5));
	printf("%d\n", strncmp(tab2, tab4, 5));
	return (0);
}
*/