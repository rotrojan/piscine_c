/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 00:23:50 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/07 01:36:02 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	*ft_s1;
	char	*ft_s2;

	(void)argc;
	s1 = strdup(argv[1]);
	s2 = strdup(argv[2]);
	ft_s1 = strdup(argv[1]);
	ft_s2 = strdup(argv[2]);
	printf("   strcmp = %d\n", strcmp(s1, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(ft_s1, ft_s2));
	free(s1);
	free(s2);
	free(ft_s1);
	free(ft_s2);
	return (0);
}
