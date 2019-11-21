/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fibonacci.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:23:05 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 09:29:51 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_fibonacci(int index);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("fibonacci[%d] = %d\n", atoi(argv[1]), ft_fibonacci(atoi(argv[1])));
	return (0);
}
