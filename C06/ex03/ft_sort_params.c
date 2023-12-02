/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 01:52:04 by aconstan          #+#    #+#             */
/*   Updated: 2023/09/26 01:14:22 by aconstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	ft_compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] == str2[i]) && str1[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tempo;

	tempo = *s2;
	*s2 = *s1;
	*s1 = tempo;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_compare(argv[i], argv[j]) > 0)
				ft_swap(&argv[j], &argv[i]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_get_length(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
