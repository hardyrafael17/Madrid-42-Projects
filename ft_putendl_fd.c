#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	newline;

	newline = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &newline, 1);
	return ;
}
