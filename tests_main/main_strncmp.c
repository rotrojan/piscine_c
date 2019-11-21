/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 01:22:21 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/07 01:35:43 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(int argc, char **argv)
{
	char		*s1;
	char		*s2;
	char		*ft_s1;
	char		*ft_s2;
	unsigned int	n;

	(void)argc;
	s1 = strdup(argv[1]);
	s2 = strdup(argv[2]);
	ft_s1 = strdup(argv[1]);
	ft_s2 = strdup(argv[2]);
	n = atoi(argv[3]);
	printf("   strncmp = %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp = %d\n", ft_strncmp(ft_s1, ft_s2, n));
	free(s1);
	free(s2);
	free(ft_s1);
	free(ft_s2);
	return (0);
}
