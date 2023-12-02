/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:42:25 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/11 21:21:59 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int number1 = 546;
	int number2 = 67;
	int division;
	int modulo;
	ft_div_mod(number1, number2, &division, &modulo);

	printf(" division de 42 par 10 c est: %d et son reste : %d ", division, modulo);
	return (0);
}
*/
