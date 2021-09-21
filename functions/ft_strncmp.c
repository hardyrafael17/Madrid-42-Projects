/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:15:58 by jpineiro          #+#    #+#             */
/*   Updated: 2021/08/24 12:16:03 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && i < (n - 1))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (n > 0)
		return (s1[i] - s2[i]);
	else
		return (0);
}
