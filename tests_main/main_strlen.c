/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 20:50:19 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/03 20:54:27 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("La chaine %s fait %d caracteres.\n", argv[1], ft_strlen(argv[1]));
	return (0);
}
