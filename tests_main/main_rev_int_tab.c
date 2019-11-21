/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rev_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 21:11:48 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/03 23:28:43 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(int argc, char **argv)
{
	int		tab[argc - 1];
	int		i;
	
	i = 0;
	while (i < argc - 1)
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
