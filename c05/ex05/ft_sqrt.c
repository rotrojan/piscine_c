/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:48:55 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/09 15:04:20 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		result;

	if (nb < 1 || nb > 2147395600)
		return (0);
	result = 0;
	while (result <= 46340)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
