/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:09:13 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/10 22:44:00 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
	{
		ft_put_char(nb + 48);
	}
}
/*
int	main(void)
{
	int	i;

	i = 2147483647;
	ft_putnbr(0);
	write(1," ",1);
	ft_putnbr(42);
	write(1," ",1);
	ft_putnbr(234324234);
	write(1," ",1);
	ft_putnbr(0);
	write(1," ",1);
	ft_putnbr(-23490235);
	write(1," ",1);
	ft_putnbr(-2147483648);
	ft_putnbr(i);
	return (0);
}
*/
