/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 04:22:23 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/28 02:43:34 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	length;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	length = max - min;
	arr = (int *)malloc(length * sizeof(int));
	if (!arr)
		return (NULL);
	while (i < length)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}

/*
int	main(void)
{

	int *arr = ft_range(5, 10);

	int	i;
	i = 0;
	while( i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return(0);
}*/
