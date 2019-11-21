/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:51:12 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/22 21:24:27 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE_TAB 10

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		ft_sub(int a, int b)
{
	return (a - b);
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
	i = 0;
	while (i < atoi(argv[argc - 1]))
		printf("%d\n", tab[i++]);
	printf("ft_is_sort(tab, length, ft_strcmp) = %d\n", ft_is_sort(tab, atoi(argv[argc - 1]), &ft_sub));
	i = 0;
	return (0);
}
