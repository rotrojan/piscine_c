/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 01:55:56 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/07 11:40:25 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define BUFF 1024

char	*ft_strcat(char *dest, char *src);

int		main(int argc, char **argv)
{
	char	dest[BUFF];
	char	src[BUFF];
	char	ft_dest[BUFF];
	char	ft_src[BUFF];

	(void)argc;
	strcpy(dest, argv[1]);
	strcpy(src, argv[2]);
	strcpy(ft_dest, argv[1]);
	strcpy(ft_src, argv[2]);
	printf("  ft_dest = %s\n   ft_src = %s\n", ft_dest, ft_src);
	printf("ft_strcat = %s\n", ft_strcat(ft_dest, ft_src));
	printf("     dest = %s\n      src = %s\n", dest, src);
	printf("   strcat = %s\n", strcat(dest, src));
	return (0);
}
