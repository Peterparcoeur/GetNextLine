#include <unistd.h>
#include <stdio.h>

static void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
}
int		main(int argc, char **argv)
{
	int x;

	x = 1;
	while (argc > 1 && argv[x] != '\0')
	{
		ft_putstr(argv[x]);
		x++;
	}
	return (0);
}


