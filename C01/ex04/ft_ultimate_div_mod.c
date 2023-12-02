/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:11:16 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/11 21:27:28 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division_result;
	int	modulo_result;

	division_result = *a / *b;
	modulo_result = *a % *b;
	*a = division_result;
	*b = modulo_result;
}

/*
int	main()
{
	int	numberA;
	int	numberB;

	numberA	= 429;
	numberB = 98;
	ft_ultimate_div_mod(&numberA, &numberB);
	printf(" division result is : %d \n", numberA);
	printf(" modulo result is : %d \n", numberB);
	return (0);
	}
*/
