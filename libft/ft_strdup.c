/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak < ibkocak@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:51:44 by ibkocak           #+#    #+#             */
/*   Updated: 2023/10/16 13:07:25 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	size_t	size;
	int		a;
	char	*dest;

	a = 0;
	size = ft_strlen(s1) + 1;
	dest = malloc(size);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, size);
	return (dest);
}
