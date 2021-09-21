/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:27:34 by jpineiro          #+#    #+#             */
/*   Updated: 2021/09/16 16:32:33 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main()
{

	char	cadena[20];
	printf("%s",cadena);
	cadena[1]='\0';
	printf("\n");
	memset(cadena, 'S', 2);
	printf("%s",cadena);
	printf("\n");
}
	/*
void *memset(void *s, int c, size_t n)
{
	for(int i=0;i<n;i++){
		s[i]=c;
	}
}
*/
