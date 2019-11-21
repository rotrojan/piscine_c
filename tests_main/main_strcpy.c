#include <stdio.h>
#include <string.h>
#define BUFF 10
char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	char	dest1[BUFF];
	char	src1[BUFF];
	char	dest2[BUFF];
	char	src2[BUFF];

	(void)argc;
	strcpy(dest1, argv[1]);
	strcpy(src1, argv[2]);
	strcpy(dest2, argv[1]);
	strcpy(src2, argv[2]);
	printf("dest1 = %s\nsrc1 = %s\n", dest1, src1);
	ft_strcpy(dest1, src1);
	printf("Apres ft_strcpy :\ndest1 = %s\nsrc1 = %s\n\n", dest1, src1);
	printf("dest2 = %s\nsrc2 = %s\n", dest2, src2);
	strcpy(dest2, src2);
	printf("Apres strcpy :\ndest2 = %s\nsrc2 = %s\n", dest2, src2);
	return (0);
}
