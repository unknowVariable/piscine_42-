/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:15:37 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/10 20:24:25 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_put_char(char number_division, char number_modulo)
{
	write(1, &number_division, 1);
	write(1, &number_modulo, 1);
}

void	ft_put_char2(char number_division, char number_modulo)
{
	write(1, &number_division, 1);
	write(1, &number_modulo, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (j < 98)
	{
		i = 1 + j;
		while (i <= 99)
		{
			ft_put_char((j / 10) + '0', (j % 10) + '0');
			write(1, " ", 1);
			ft_put_char2((i / 10) + '0', (i % 10) + '0');
			write(1, ", ", 2);
			i++;
		}
		j++;
	}
	write(1, "98 99", 5);
}
/*
int	main()
{
	ft_print_comb2();
	return (0);
}
*/
