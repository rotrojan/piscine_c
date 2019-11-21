/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ultimate_ft.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:41:43 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/03 18:02:16 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int		*********ptr9;
	int		value;

	ptr9 = NULL;
	value = 21;
	*********ptr9 = value;
	printf("%d\n", value);
	ft_ultimate_ft(ptr9);
	printf("%d\n", value);
}
