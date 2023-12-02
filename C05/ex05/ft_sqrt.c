/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 03:06:01 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/26 22:09:16 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	racine;
	unsigned int	nbb;

	nbb = nb;
	racine = 1;
	if (nbb <= 0)
		return (0);
	while ((racine * racine) < nbb && racine < 46341)
	{
		racine++;
	}
	if ((racine * racine) == nbb)
		return (racine);
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(32400));
	return (0);
}

