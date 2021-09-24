/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 03:40:11 by jpineiro          #+#    #+#             */
/*   Updated: 2021/08/25 03:40:14 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		 if ((str[c] > 96) && (str[c] < 123))
			str[c] -= 32;
		c++;
	}
	return (str);
}