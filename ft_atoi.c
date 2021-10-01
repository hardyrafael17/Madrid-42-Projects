#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		i;
	int		result;
	int		sign;

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
	{
		result *= 10;
		result += str[i++] - 48;
	}
	return (result * sign);
}
