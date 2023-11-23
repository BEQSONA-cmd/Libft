/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:18:21 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/23 23:46:14 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	a[] = "Hello, World!";
	char	s[5];

	// Using strncpy to copy a substring
	strncpy(s, a + 7, 5);
	a[0] = '\0';
	printf("%s\n", s);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
}