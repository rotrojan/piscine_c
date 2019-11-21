/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_print_memory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 16:19:24 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/06 09:45:37 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void	*ft_print_memory(void *addr, unsigned int size);

int		main(int argc, char **argv)
{
	char *str;

	(void)argc;
	str = strdup(argv[1]);
	write(1, "\n", 1);
	ft_print_memory(argv[1], atoi(argv[2]));
	write(1, "\n", 1);
	free(str);
	return (0);
}
