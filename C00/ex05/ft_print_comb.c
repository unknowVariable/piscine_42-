/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:30:40 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/10 22:23:49 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	while (c < '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_put_char(c);
				ft_put_char(d);
				ft_put_char(u);
				write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
	write(1, "789", 3);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
