/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sqrt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:09:01 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 10:19:53 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("sqrt(%d) = %d\n", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
	return (0);
}
