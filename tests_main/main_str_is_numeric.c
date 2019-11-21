#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("str : \"%s\"\nstr_is_numeric = %d\n", argv[1], ft_str_is_numeric(argv[1]));
	return (0);
}
