#include "../libft.h"

int ft_isspace(int c)
{
	return (((c >= '\t') && ('\r' >= c)) || (c == ' '));
}