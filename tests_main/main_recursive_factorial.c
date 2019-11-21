/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_recursive_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 00:25:29 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 00:26:09 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d! = %d\n", atoi(argv[1]), ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
