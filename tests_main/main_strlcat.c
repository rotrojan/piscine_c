/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotrojan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:08:12 by rotrojan          #+#    #+#             */
/*   Updated: 2019/07/08 14:58:41 by rotrojan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF 1024

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

	/*{
	  char			dest[BUFF];
	  char			src[BUFF];
	  char			ft_dest[BUFF];
	  char			ft_src[BUFF];
	  unsigned int	nb;

	  nb = atoi(argv[3]);
	  (void)argc;
	  strcpy(dest, argv[1]);
	  strcpy(src, argv[2]);
	  strcpy(ft_dest, argv[1]);
	  strcpy(ft_src, argv[2]);
	  printf("   ft_dest = %s\n    ft_src = %s\n", ft_dest, ft_src);
	  printf("ft_strlcat = %u\n", ft_strlcat(ft_dest, ft_src, nb));
	  printf("   ft_dest = %s\n    ft_src = %s\n\n", ft_dest, ft_src);
	  printf("      dest = %s\n       src = %s\n", dest, src);
	  printf("   strlcat = %lu\n", strlcat(dest, src, nb));
	  printf("      dest = %s\n       src = %s\n", dest, src);
	  return (0);
	  }*/

int		main(int argc, char **argv)
{
	char dest[200];
	char dest1[200];
	strcpy(dest, argv[1]);
	strcpy(dest1, argv[1]);

	if (argc)
		printf ("int result with ft_strlcat : %u\n", ft_strlcat(dest, argv[2], atoi(argv[3])));
	write (1, "dest result with ft_strlcat :", 29);
	write (1, &dest[0], 1);
	write (1, &dest[1], 1);
	write (1, &dest[2], 1);
	write (1, &dest[3], 1);
	write (1, &dest[4], 1);
	write (1, &dest[5], 1);
	write (1, &dest[6], 1);
	write (1, &dest[7], 1);
	write (1, &dest[8], 1);
	write (1, &dest[9], 1);
	write (1, &dest[10], 1);
	write (1, &dest[11], 1);
	write (1, &dest[12], 1);
	write (1, &dest[13], 1);
	write (1, &dest[14], 1);
	write (1, &dest[15], 1);
	write (1, &dest[16], 1);
	write (1, &dest[17], 1);
	write (1, &dest[18], 1);
	write (1, &dest[19], 1);
	write (1, &dest[20], 1);
	write (1, &dest[21], 1);
	write (1, &dest[22], 1);
	write (1, &dest[23], 1);
	write (1, &dest[24], 1);
	write (1, "\n", 1);

	printf ("int result with strlcat : %lu\n", strlcat(dest1, argv[2], atoi(argv[3])));
	write (1, "dest result with strlcat :", 26);
	write (1, &dest1[0], 1);
	write (1, &dest1[1], 1);
	write (1, &dest1[2], 1);
	write (1, &dest1[3], 1);
	write (1, &dest1[4], 1);
	write (1, &dest1[5], 1);
	write (1, &dest1[6], 1);
	write (1, &dest1[7], 1);
	write (1, &dest1[8], 1);
	write (1, &dest1[9], 1);
	write (1, &dest1[10], 1);
	write (1, &dest1[11], 1);
	write (1, &dest1[12], 1);
	write (1, &dest1[13], 1);
	write (1, &dest1[14], 1);
	write (1, &dest1[15], 1);
	write (1, &dest1[16], 1);
	write (1, &dest1[17], 1);
	write (1, &dest1[18], 1);
	write (1, &dest1[19], 1);
	write (1, &dest1[20], 1);
	write (1, &dest1[21], 1);
	write (1, &dest1[22], 1);
	write (1, &dest1[23], 1);
	write (1, &dest1[24], 1);
	write (1, "\n", 1);
	return(0);
}
