#include "get_next_line.h"

int	main(void)
{
	int fd = open("nl.txt", O_RDONLY);
	char *line;
	int i;
	while ((i = get_next_line(fd, &line)))
	{
		printf("i = %d || %s\n", i, line);
		free(line);
	}
	printf("i = %d || %s\n", i, line);
		free(line);
	return (0);
}
