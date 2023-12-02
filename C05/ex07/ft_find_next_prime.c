/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 04:09:19 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/21 23:25:12 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nbb;

	nbb = nb;
	if (nb <= 1)
		return (0);
	i = 2;
	while ((i * i) <= nbb)
	{
		if (nbb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(2147483642));
	return (0);
}
*/
