/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:55:00 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/22 21:16:50 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_count_if(char **tab, int length, int (*f)(char*));
int		ft_str_is_numeric(char *str);

int		main(int argc, char **argv)
{
	int		i;
	char	*tab[atoi(argv[argc - 1])];

	i = 0;
	while (i < atoi(argv[argc - 1]))
	{
		tab[i] = strdup(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < atoi(argv[argc - 1]))
		printf("%s\n", tab[i++]);
	printf("ft_count_if(tab, length, ft_is_numeric) = %d\n", ft_count_if(tab, atoi(argv[argc - 1]), &ft_str_is_numeric));
	i = 0;
	while (i < atoi(argv[argc - 1]))
		free(tab[i++]);
	return (0);
}
