#include "stdio.h"
#include "get_next_line_bonus.h"

int	main(void)
{
	char	*line;
	int		fd;

	fd = 0;
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
}
