/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:31:10 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/08 12:35:03 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
