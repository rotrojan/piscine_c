/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:34:37 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 16:01:07 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("is %d prime ? %d\n", atoi(argv[1]), ft_is_prime(atoi(argv[1])));
	return (0);
}
