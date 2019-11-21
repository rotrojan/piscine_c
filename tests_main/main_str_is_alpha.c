#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("str : \"%s\"\nstr_is_alpha = %d\n", argv[1], ft_str_is_alpha(argv[1]));
	return (0);
}
