/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:15:30 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/12 15:51:24 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tempo;

	i = 0;
	while (i < size)
	{	
		j = i + 1;
		while (j < size -1)
		{
			if (tab[i] > tab[j])
			{
				tempo = tab[i];
				tab[i] = tab[j];
				tab[j] = tempo;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	int	tab[8] = {8, 4, 2, 3, 1, 7, 5,9};
	ft_sort_int_tab(tab, 8);

	int	j = 0;
	while ( j < 8 )
	{
		printf("%d, ", tab[j]);
		j++;
	}
	return (0);
}

*/