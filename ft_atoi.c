#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char		*str;
	size_t		i;
	size_t		result;
	int			sign;

	str = (char *)nptr;
	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
	 || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	if (ft_isdigit(str[i]))
		result = str[i++] - 48;
	while (ft_isdigit(str[i]))
		result = (result * 10) + (str[i++] - 48);
	if (result > 2147483647 && sign == 1)
		return (-1);
	else if (result > 2147483648 && sign == -1)
		return (0);
	return (result * sign);
}
