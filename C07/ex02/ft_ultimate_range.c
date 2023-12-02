/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:58:42 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/28 02:50:48 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(length * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (i < length)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (length);
}

/*
int	main(void)
{
	int	*number;
	int	len;

	len = ft_ultimate_range(&number, 2, 10);
	__builtin_printf("len: %d\n", len);
	for (int i = 0; i < len; i++)
		__builtin_printf("%d\n", number[i]);
	return (0);
}*/
