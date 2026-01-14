#include "../libft.h"

void ft_putstr_fd(char const *str, int fd)
{
	while (*str != '\0' && fd >= 0)
	{
		write(fd, str, 1);
		str++;
	}
}