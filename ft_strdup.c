/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:49:01 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/23 20:49:55 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	j;
	unsigned int	i;
	char			*a;

	j = ft_strlen(s1);
	i = 0;
	a = malloc(((j) * sizeof(char)) + 1);
	if (s1 == NULL)
	{
		return (malloc(0));
	}
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
