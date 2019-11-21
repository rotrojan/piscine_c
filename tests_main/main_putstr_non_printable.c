/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_non_printable.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:44:50 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/05 15:57:34 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	putnbr_hexa(int nb);
void	ft_putstr_non_printable(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	ft_putstr_non_printable(argv[1]);
	return (0);
}
