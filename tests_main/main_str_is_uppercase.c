#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("str : \"%s\"\nstr_is_uppercase = %d\n", argv[1], ft_str_is_uppercase(argv[1]));
	return (0);
}
