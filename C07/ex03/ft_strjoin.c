/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 02:44:04 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/28 02:37:08 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

char	*malloc_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	if (size <= 0)
	{
		dest = malloc(1 * sizeof(char));
		dest[0] = '\0';
	}
	else
		dest = malloc((j + (size - 1) * ft_strlen(sep) + 1) * sizeof(char));
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	dest = malloc_strjoin(size, strs, sep);
	if (size <= 0)
		return (dest);
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (j < size)
	{
		ft_strcpy(&dest[i], strs[j]);
		i += ft_strlen(strs[j]);
		if (j < size - 1)
		{
			ft_strcpy(&dest[i], sep);
			i += ft_strlen(sep);
		}
		j++;
	}
	return (dest);
}

/*
int	main(void)
{
	int		size;
	char	*result;

	char *strs[4] = {"10", "20", "30", "40"};
	char sep[] = "jules";
	size = 0;
	result = ft_strjoin(size, strs, sep);
	__builtin_printf("Result: %s", result);
}*/
