/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 05:13:25 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/25 10:45:28 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int));
int		ft_square(int n);

int		main(int argc, char **argv)
{
	int		i;
	int		tab[atoi(argv[argc - 1])];
	int		*tab_out;

	i = 0;
	while (i < atoi(argv[argc - 1]))
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	tab_out = ft_map(tab, atoi(argv[argc - 1]), &ft_square);
	i = 0;
	while (i < atoi(argv[argc - 1]))
	{
		printf("tab[%d] = %d, tab_out[%d] = %d\n", i, tab[i], i, tab_out[i]);
		i++;
	}
	free(tab_out);
	return (0);
}
