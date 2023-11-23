/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:03:28 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/22 18:06:19 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	x;
	unsigned long	i;

	i = 0;
	x = 0;
	if (needle[x] == '\0')
	{
		return ((char *)haystack);
	}
	while (i < len && haystack[i] != '\0')
	{
		x = 0;
		while (haystack[i + x] && needle[x] && haystack[i + x] == needle[x] && i
			+ x < len)
		{
			x++;
		}
		if (x == ft_strlen(needle))
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
