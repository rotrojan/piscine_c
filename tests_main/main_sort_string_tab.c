/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort_string_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:07:08 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/22 20:24:36 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_sort_string_tab(char **tab);

int		main(int ac, char **av)
{
	char	*tab[ac];
	int		i;

	i = 0;
	while (i < ac - 1)
	{
		tab[i] = strdup(av[i + 1]);
		i++;
	}
	tab[i] = 0;
	i = 0;
	while (tab[i])
		printf("%s\n", tab[i++]);
	printf("\n");
	ft_sort_string_tab(tab);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	return (0);
}
