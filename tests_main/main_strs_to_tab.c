/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strs_to_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:08:11 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/17 17:34:50 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str		*ft_strs_to_tab(int ac, char **av);
void					ft_show_tab(struct s_stock_str *par);

int		main(int argc, char **argv)
{
	int				i;
	t_stock_str		*par;

	i = 0;
	par = ft_strs_to_tab(argc - 1, &argv[1]);
	ft_show_tab(par);
	while (i < argc - 1)
	{
		free(par[i].copy);
		i++;
	}
	free(par);
	return (0);
}
