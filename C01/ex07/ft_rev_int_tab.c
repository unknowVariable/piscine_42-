/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 01:08:49 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/11 22:28:48 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tempo;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tempo = tab[i];
		tab[i] = tab[j];
		tab[j] = tempo;
		i++;
		j--;
	}
}
/*
int	main()
{
	int	tab[6] = {10, 20, 30, 40, 50, 60};
	int 	i = 0;
	while ( i < 6 )
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 6);
	int	j = 0;
	while ( j < 6 )
	{
		printf("%d ", tab[j]);
		j++;
	}


	return (0);
}
*/
