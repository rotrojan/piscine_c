/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 12:13:03 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/16 15:45:30 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char		*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	char	*str;

	(void)argc;
	str = ft_strdup(argv[1]);
	printf("ft_strdup(str) = %s\n", str);
	free(str);
	return (0);
}
