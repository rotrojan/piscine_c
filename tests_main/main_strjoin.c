/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:46:34 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/16 01:53:06 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(int argc, char **argv)
{
	char	*str;
	char	*strs[argc - 3];
	int		i;

	i = 0;
	while (i < atoi(argv[1]))
	{
		strs[i] = argv[i + 2];
		printf("%s\n", strs[i]);
		i++;
	}
	str = ft_strjoin(atoi(argv[1]), strs, argv[argc - 1]);
	printf("ft_strjoin = %s\n", str);
	free(str);
	return (0);
}
