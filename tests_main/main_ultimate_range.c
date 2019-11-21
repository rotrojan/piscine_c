/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ultimate_range.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:00:29 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/10 18:39:19 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(int argc, char **argv)
{
	int		i;
	int		*range;
	int		size;

	(void)argc;
	range = NULL;
	size = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	printf("sizeof(range) = %d\n", size);
	if (!range)
	{
		printf("Error\n");
		return (0);
	}
	i = 0;
	while (i < (atoi(argv[2]) - atoi(argv[1])))
		printf("%d\n", range[i++]);
	free(range);
	return (0);
}
