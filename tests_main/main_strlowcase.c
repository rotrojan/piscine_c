/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strupcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 20:54:43 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/04 22:39:27 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("str = %s\n", argv[1]);
	printf("ft_strlowcase(str) = %s\n", ft_strlowcase(argv[1]));
	return (0);
}
