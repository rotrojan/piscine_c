/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_find_next_prime.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:21:51 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 18:13:51 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("Next prime from %d is %d\n", atoi(argv[1]), ft_find_next_prime(atoi(argv[1])));
	return (0);
}
