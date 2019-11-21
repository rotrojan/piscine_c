/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_iterative_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 22:57:22 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 00:22:23 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d! = %d\n", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
