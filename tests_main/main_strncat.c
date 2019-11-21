/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 01:55:56 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/07 13:20:11 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF 1024

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(int argc, char **argv)
{
	char	dest[BUFF];
	char	src[BUFF];
	char	ft_dest[BUFF];
	char	ft_src[BUFF];
	int		nb;

	nb = atoi(argv[3]);
	(void)argc;
	strcpy(dest, argv[1]);
	strcpy(src, argv[2]);
	strcpy(ft_dest, argv[1]);
	strcpy(ft_src, argv[2]);
	printf("   ft_dest = %s\n    ft_src = %s\n", ft_dest, ft_src);
	printf("ft_strncat = %s\n", ft_strncat(ft_dest, ft_src, nb));
	printf("      dest = %s\n       src = %s\n", dest, src);
	printf("   strncat = %s\n", strncat(dest, src, nb));
	return (0);
}
