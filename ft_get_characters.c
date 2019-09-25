#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define BUFF_SIZE 5

int main(int argc, char **argv)
{
	int	i;
	int	fd;
	char	*str;
	char	*ptr;

	i = 0;
	str = NULL;
	ptr = NULL;
	if (argc == 2)
	{
		fd = open("test.c", O_RDONLY);
		if (read(fd, str, BUFF_SIZE) > 0)
			printf ("Good job");
		if (!(ptr = malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return(-1);
		while (str[i])
			ft_strncpy(ptr, str, BUFF_SIZE);
	}
	close (fd);
	return (0);
}

