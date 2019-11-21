/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_convert_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:17:18 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/15 14:06:09 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char **argv)
{
	char	*str;

	(void)argc;
	str = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", str);
	if (str)
		free(str);
	return (0);
}
