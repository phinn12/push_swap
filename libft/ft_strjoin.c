/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibkocak < ibkocak@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:15:06 by ibkocak           #+#    #+#             */
/*   Updated: 2024/04/28 17:40:59 by ibkocak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	i;
	int		j;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	a = malloc(i + 2);
	if (!a)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		a[j] = ((unsigned char *)s1)[j];
		j++;
	}
	a[j++] = ' ';
	k = 0;
	while (s2[k])
		a[j++] = ((unsigned char *)s2)[k++];
	a[j] = '\0';
	return (a);
}
