/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:55:14 by jpineiro          #+#    #+#             */
/*   Updated: 2021/09/18 12:15:13 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *cadena="    +-+-+---++----452gg74";
		printf("%d\n",ft_atoi(cadena));
		//printf("%d\n",atoi(cadena));
}

int	ft_atoi(char *str)
{
	int	i;
	int	cminus;
	int	res;
	int	num;

	num = 0;
	res = 0;
	cminus = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			cminus++;
		else if (str[i] < '9' && str[i] > '1')
		{
			num = str[i] - '0';
			res = res * 10 + num;
			if (!(str[i + 1] < '9' && str[i + 1] > '1'))
				break ;
		}
		i++;
	}
	if (cminus % 2 == 0)
		return (res);
	else
		return (-res);
}
