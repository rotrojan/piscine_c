/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 16:07:32 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/08 00:38:19 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nb, char *base);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
