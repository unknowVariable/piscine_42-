/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:52:03 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/14 18:04:33 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
char *ft_strcpy(char *dest, char *src)
{
	char *start_dest = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start_dest);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char str2[25];
	ft_strcpy(str2, "MathieuIsLove");
	printf("%s", str2);

	return (0);
}
*/
