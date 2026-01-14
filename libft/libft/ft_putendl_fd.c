#include "../libft.h"

void ft_putendl_fd(char const *s, int fd)
{
	while (*s != '\0' && fd >= 0)
	{
		write(fd, s, 1);
		s++;
	}
	if (fd >= 0)
		write(fd, "\n", 1);
}