/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:27:34 by jpineiro          #+#    #+#             */
/*   Updated: 2021/09/18 10:17:26 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	cadena[21] = "hola soy un marciano";

	printf("%s", cadena);
	cadena[1] = '\0';
	printf("\n");
	ft_memset(cadena, 'S', 2);
	printf("%s", cadena);
	printf("\n");
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	char *cadena;
	i = 0;
	while (i < n)
	{
		*(s +i)= c;
		i++;
	}
	return (s);
}
