/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:04:15 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/11 21:39:14 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
void	ft_putstr(char *str)
{
	int 	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

}



char arr[8] = "Mathieu";

int	main()
{

	char arr[8] = "Mathieu";
	ft_putstr(arr);
	return(0);
}
*/
