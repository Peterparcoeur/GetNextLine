#define BUFF_SIZE

int	get_next_line(const int fd, char **line)
{
	char *file_copy;

	if (fd < 0 || line == NULL)
		return (-1);
	if (!(file_copy = malloc(sizeof(char) * BUFF_SIZE)))
		return (-1);
	while ((read(fd, *line, BUFF_SIZE)) > 0)
		ft_strncpy(file_copy, *line, BUFF_SIZE);
	if (ft_memchr(*line, '\n', BUFF_SIZE)
		break;
//ouvre un fichier, lire 5 characteres, print les characteres, fermer le fichier 
