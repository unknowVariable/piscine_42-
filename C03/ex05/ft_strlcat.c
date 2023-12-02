/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:15:27 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/26 01:02:13 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int	ft_get_length(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i + 1 < size)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + ft_get_length(src));
}
/*
int	main(void)
{
	char	test1[20] = "blobfish";
	printf("test1: %u\n", ft_strlcat(test1, "abcde", 0));
	printf("result: %s\n", test1);
	char	test1s[20] = "blobfish";
	printf("> solution: %zu\n", strlcat(test1s, "abcde", 0));
	printf("> result: %s\n", test1s);
	return (0);
}
*/
