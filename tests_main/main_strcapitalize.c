/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcapitalize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 09:00:51 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/05 09:06:00 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(int argc, char **argv)
{
	(void)argc;

	printf("str               = %s\n", argv[1]);
	printf("ft_strcapitalize  = %s\n", ft_strcapitalize(argv[1]));
}
