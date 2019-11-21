/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_foreach.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 03:17:59 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/25 10:32:54 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

int		main(int argc, char **argv)
{
	int		i;
	int		tab[atoi(argv[argc - 1])];

	i = 0;
	while (i < atoi(argv[argc - 1]))
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	tab[i] = 0;
	ft_foreach(tab, atoi(argv[argc - 1]), &ft_putnbr);
	return (0);
}
