/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 03:43:55 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/21 23:17:13 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// 0, 1 et les nb negatifs ne peuvent pas etre des nb premiers :')
// Puis on itere de 2 a la racine carree
// Et donc si a un moment nb est / par i
// Si c est le cas : nb a un diviseur autre que 1
// donc il n est pas premiers
//  si la boucle ce termine sans trouver de diviseur ( autre que 1 ou lui meme )
// la fonction renvoie 1
int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nbb;

	nbb = nb;
	if (nbb <= 1)
		return (0);
	i = 2;
	while ((i * i) <= nbb)
	{
		if (nbb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(2147483647));
	return (0);
}
*/
