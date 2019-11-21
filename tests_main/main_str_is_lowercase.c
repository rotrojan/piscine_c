#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("str : \"%s\"\nstr_is_lowercase = %d\n", argv[1], ft_str_is_lowercase(argv[1]));
	return (0);
}
