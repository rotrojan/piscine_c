/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_iterative_power.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 08:26:30 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 08:54:39 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d ^ %d =  %d\n", atoi(argv[1]), atoi(argv[2]), ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
