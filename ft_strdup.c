/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbryon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:02:10 by wbryon            #+#    #+#             */
/*   Updated: 2020/11/11 15:28:16 by wbryon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	else
	{
		while (*src != '\0')
			dest[i++] = *src++;
		dest[i] = '\0';
	}
	return (dest);
}
