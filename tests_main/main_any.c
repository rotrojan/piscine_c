/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:55:00 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/22 20:49:46 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_any(char **tab, int (*f)(char*));
int		ft_str_is_numeric(char *str);

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
	printf("ft_any(tab, ft_is_numeric) = %d\n", ft_any(tab, &ft_str_is_numeric));
	i = 0;
	while (tab[i])
		free(tab[i++]);
	return (0);
}
