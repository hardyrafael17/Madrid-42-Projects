/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjimenez <hjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 07:46:12 by hjimenez          #+#    #+#             */
/*   Updated: 2021/10/15 22:12:50 by hjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if(!s1 || !s2)
		return (NULL);
	char *joined;
	size_t	len;

	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	joined = ft_calloc(len, sizeof(char));
	if (!joined)
		return (NULL);
	ft_strlcat(joined, s1, len);
	ft_strlcat(joined, s2, len);
	return (joined);
}
