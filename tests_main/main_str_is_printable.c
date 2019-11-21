#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("str : \"%s\"\nstr_is_printable = %d\n", argv[1], ft_str_is_printable(argv[1]));
	return (0);
}
