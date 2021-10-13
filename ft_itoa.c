/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:59:19 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/13 12:45:47 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	FILE	*file;
	int		sign;
	int		arrlength;
	char	*character;
	int		countArrLength;
	size_t	index;
	sign = 1;
	arrlength = 1;
	file = fopen("ft_Itoa.txt", "a");
	fprintf(file, "\ncalled with %d,\n", n);
	fclose(file);
	if (n == -2147483648)
		{
			character = ft_calloc(12, sizeof(char));
			if(!character)
				return (NULL);
			character = "-2147483648";
			return (character);
		}
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		sign = -1;
		n *= sign;
	}
	index = 0;
	countArrLength = n;
	//get needed array length
	while (countArrLength != 0)
	{
		countArrLength = (countArrLength / 10);
		arrlength++;
	}
	if(sign == -1)
		{
			character = ft_calloc(arrlength +1 , 1);
			if (!character)
				return (NULL);
			character[0] = '-';
			index++;
		}
	else 
		{
			character = ft_calloc(arrlength, 1);
				if (!character)
				return (NULL);
		}
	if (!character)
		return (NULL);
	file = fopen("ft_Itoa.txt", "a");
	fprintf(file, "\ncalled with %d, sign '%d' Array Length>>>%d\n", n, sign, arrlength);
	fclose(file);
	////////////////////////
	while (n != 0)
	{
		if(sign == -1){
		*(character + arrlength - index)= '0' + n % 10;
		}
		else {
		*(character + (arrlength -2) - index)= '0' + n % 10;
		}
		n = (n / 10);
		index++;
	}
	file = fopen("ft_Itoa.txt", "a");
	fprintf(file, "Result >>%s\n", character);
	fclose(file);
	return (character);
}
//-2,147,483,648 to 2,147,483,647