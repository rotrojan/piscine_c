/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:05:36 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/14 17:53:52 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		check_grid(int pos, int n, int **grid);
int		backtrack(int pos, int n, int **grid);
int		**init_grid(char *str);
int		count_params(char *str);
void	print_grid(int n, int **grid);


int		main(int argc, char **argv)
{
	int		**grid;
	int		i;
	int		j;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!(grid = init_grid(argv[1])))
	{
		write(1, "Error1\n", 7);
		return (0);
	}
	printf("%d\n", count_params(argv[1]));
/*********************************************************/	
	i = 0;
	while (i < count_params(argv[1]) / 4 + 2)
	{
		j = 0;
		while (j <  count_params(argv[1]) / 4 + 2)
		{
			printf("%d ", argv[i][j] - '0');
			j++;
		}
		printf("\n");
		i++;
	}

/*********************************************************/	
//	print_grid((count_params(argv[1]) / 4), grid);
	if (!(backtrack(1, (count_params(argv[1]) / 4), grid)))
		write(1, "Error2\n", 7);
// FREE !!!
	return(0);
}
