/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:02:36 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/16 01:25:00 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	int		i;
	int		*tab;

	i = 0;
	(void)argc;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (tab == NULL)
		return (0);
	while (i < (atoi(argv[2]) - atoi(argv[1])))
		printf("%d\n", tab[i++]);
	free(tab);
	return (0);
}
