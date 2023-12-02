/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:11:54 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/16 19:35:45 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	tab[50] = "Hello, ";
	char	onemoretab[50] = "Hello, ";
	char	tab2[] = "World !!";
	printf("isitright? %s\n", ft_strncat(tab, tab2, 50));
	printf("itisright: %s\n", strncat(onemoretab, tab2, 50));
	return (0);
}

*/