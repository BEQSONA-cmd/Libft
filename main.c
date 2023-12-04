/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:20:49 by escura            #+#    #+#             */
/*   Updated: 2023/12/04 13:50:16 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	check_ft_atoi(void)
{
	int		answer;
	int		length;
	int		expected;
	int		result;
	char	*str_atoi[] = {"12123", "-0012a42", "00000-42a1234", " -12a42",
			" "};

	answer = 1;
	printf("__________FT_ATOI__________\n");
	length = sizeof(str_atoi) / sizeof(str_atoi[0]);
	for (int i = 0; i < length; i++)
	{
		expected = atoi(str_atoi[i]);
		result = ft_atoi(str_atoi[i]);
		if (expected == result)
		{
			printf("✅  ");
		}
		else
		{
			printf("❌  ");
			answer = 0;
		}
		printf("original: %-12d", expected);
		printf(" | ");
		printf("mine: %-12d\n", result);
	}
	printf("\n");
	return (answer);
}
int	check_ft_bzero(void)
{
	int		answer;
	char	a[] = "hello";
	char	b[] = "hello";
	size_t	i;

	answer = 1;
	printf("__________FT_BZERO__________\n");
	i = sizeof(a);
	bzero(a, i);
	ft_bzero(b, i);
	if (strcmp(a, b) == 0)
	{
		printf("✅  ");
	}
	else
	{
		printf("❌  ");
		answer = 0;
	}
	printf("original: ");
	for (size_t i = 0; i < sizeof(a); i++)
	{
		printf("%d, ", a[i]);
	}
	printf(" | ");
	printf("mine: ");
	for (size_t i = 0; i < sizeof(a); i++)
	{
		printf("%d, ", b[i]);
	}
	printf("\n");
	printf("\n");
	return (answer);
}

int	check_ft_isalnum(void)
{
	int		answer;
	int		x;
	int		y;
	char	test[] = {'a', '1', '\n'};
	int		len;

	answer = 1;
	len = sizeof(test) / sizeof(char);
	printf("__________FT_ISALNUM__________\n");
	for (int i = 0; i < len; i++)
	{
		x = ft_isalnum(test[i]);
		y = isalnum(test[i]);
		if (x == y)
		{
			printf("✅  ");
		}
		else
		{
			printf("❌  ");
			answer = 0;
		}
		printf("original: %d", x);
		printf(" | ");
		printf("mine: %d\n", y);
	}
	printf("\n");
	return (answer);
}

int	check_ft_isalpha(void)
{
	int		answer;
	int		x;
	int		y;
	char	test[] = {'a', '1', '\n'};
	int		len;

	answer = 1;
	len = sizeof(test) / sizeof(char);
	printf("__________FT_ISALPHA__________\n");
	for (int i = 0; i < len; i++)
	{
		x = ft_isalpha(test[i]);
		y = isalpha(test[i]);
		if (x == y)
		{
			printf("✅  ");
		}
		else
		{
			printf("❌  ");
			answer = 0;
		}
		printf("original: %d", x);
		printf(" | ");
		printf("mine: %d\n", y);
	}
	printf("\n");
	return (answer);
}

int	check_ft_isascii(void)
{
	int		answer;
	int		x;
	int		y;
	char	test[] = {'a', '1', '\n'};
	int		len;

	answer = 1;
	len = sizeof(test) / sizeof(char);
	printf("__________FT_ISASCII__________\n");
	for (int i = 0; i < len; i++)
	{
		x = ft_isascii(test[i]);
		y = isascii(test[i]);
		if (x == y)
		{
			printf("✅  ");
		}
		else
		{
			printf("❌  ");
			answer = 0;
		}
		printf("original: %d", x);
		printf(" | ");
		printf("mine: %d\n", y);
	}
	printf("\n");
	return (answer);
}

int	check_ft_isdigit(void)
{
	int		answer;
	int		x;
	int		y;
	char	test[] = {'a', '1', '\n', '0'};
	int		len;

	answer = 1;
	len = sizeof(test) / sizeof(char);
	printf("__________FT_ISDIGIT__________\n");
	for (int i = 0; i < len; i++)
	{
		x = ft_isdigit(test[i]);
		y = isdigit(test[i]);
		if (x == y)
		{
			printf("✅  ");
		}
		else
		{
			printf("❌  ");
			answer = 0;
		}
		printf("original: %d", x);
		printf(" | ");
		printf("mine: %d\n", y);
	}
	printf("\n");
	return (answer);
}

int	check_ft_isprint(void)
{
	int		answer;
	int		x;
	int		y;
	char	test[] = {'a', '1', '\n', '0', 127};
	int		len;

	answer = 1;
	len = sizeof(test) / sizeof(char);
	printf("__________FT_ISPRINT__________\n");
	for (int i = 0; i < len; i++)
	{
		x = ft_isprint(test[i]);
		y = isprint(test[i]);
		if (x == y)
		{
			printf("✅  ");
		}
		else
		{
			printf("❌  ");
			answer = 0;
		}
		printf("original: %d", x);
		printf(" | ");
		printf("mine: %d\n", y);
	}
	printf("\n");
	return (answer);
}

int	check_ft_memchr(void)
{
	int		answer;
	char	*a[] = {"bonjornaa", "\0", "beqson", "Hello"};
	int		b[] = {'o', '\0', 's', 'w'};
	int		len;
	char	*x;
	char	*y;

	answer = 1;
	len = sizeof(b) / sizeof(b[1]);
	printf("__________FT_MEMCHR__________");
	for (int i = 0; i < len; i++)
	{
		printf("\n");
		x = memchr(a[i], b[i], sizeof(a[i]));
		y = ft_memchr(a[i], b[i], sizeof(a[i]));
		if (x == NULL || y == NULL || (strcmp(x, y) == 0))
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", x);
			printf("| mine: ");
			printf("%-12s ", y);
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", x);
			printf("| mine: ");
			printf("%-12s ", y);
			answer = 0;
		}
	}
	printf("\n");
	printf("\n");
	return (answer);
}

int	check_ft_memcmp(void)
{
	int		answer;
	char	*a[] = {"bonjornaa", "\0", "Hello"};
	char	*b[] = {"bonjornaa", "\0", "c"};
	int		len;

	answer = 1;
	len = sizeof(b) / sizeof(b[1]);
	printf("__________FT_MEMCMP__________");
	for (int i = 0; i < len; i++)
	{
		printf("\n");
		if (ft_memcmp(a[i], b[i], len) == memcmp(a[i], b[i], len))
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", a[i]);
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", a[i]);
			answer = 0;
		}
	}
	printf("\n");
	printf("\n");
	return (answer);
}

int	check_ft_memcpy(void)
{
	int		answer;
	char	a[3][15] = {"bonjornaa", "\0", "Hello"};
	char	c[3][15] = {"aaaaa", "\0", "bbbb"};
	char	b[3][15] = {"bonjornaa", "\0", "Hello"};
	char	d[3][15] = {"aaaaa", "\0", "bbbb"};
	int		len;

	answer = 1;
	printf("__________FT_MEMCPY__________\n");
	len = 3;
	for (int i = 0; i < len; i++)
	{
		memcpy(a[i], c[i], sizeof(a[i]));
		ft_memcpy(b[i], d[i], sizeof(b[i]));
		if (memcmp(a[i], c[i], sizeof(a[i])) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
			answer = 0;
		}
	}
	if (ft_memcpy(NULL, NULL, 5) == NULL)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", NULL);
		printf("\n");
	}
	printf("\n");
	return (answer);
}

int	check_ft_memmove(void)
{
	char	a[3][15] = {"bonjornaa", "\0", "Hello"};
	char	c[3][15] = {"aa", "\0", "bbbb"};
	char	b[3][15] = {"bonjornaa", "\0", "Hello"};
	char	d[3][15] = {"aa", "\0", "bbbb"};
	int		len;
	char	l[] = "aaaaaaaaa";
	char	m[] = "bb";
	int		answer;

	printf("__________FT_MEMMOVE__________\n");
	len = 3;
	ft_memmove(l, m, sizeof(l));
	if (l[9] == 97)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12d ", 97);
		printf("| mine: ");
		printf("%-12d ", l[9]);
		printf("\n");
	}
	if (l[9] != 97)
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12d ", 97);
		printf("| mine: ");
		printf("%-12d ", l[9]);
		printf("\n");
		answer = 0;
	}
	if (ft_memmove(NULL, NULL, 5) == NULL)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", NULL);
		printf("\n");
	}
	for (int i = 0; i < len; i++)
	{
		memmove(a[i], c[i], sizeof(a[i]));
		ft_memmove(b[i], d[i], sizeof(b[i]));
		if (memcmp(a[i], c[i], sizeof(a[i])) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
			answer = 0;
		}
	}
	printf("\n");
	return (answer);
}

int	check_ft_memset(void)
{
	int		answer;
	char	a[] = "hello";
	char	b[] = "hello";
	size_t	i;

	answer = 1;
	printf("__________FT_MEMSET__________\n");
	i = sizeof(a);
	memset(a, 97, i);
	ft_memset(b, 97, i);
	if (a[1] == b[1])
	{
		printf("✅  ");
	}
	else
	{
		printf("❌  \n");
		answer = 0;
	}
	printf("original: ");
	for (size_t i = 0; i < sizeof(a); i++)
	{
		printf("%d, ", a[i]);
	}
	printf(" | ");
	printf("mine: ");
	for (size_t i = 0; i < sizeof(a); i++)
	{
		printf("%d, ", b[i]);
	}
	printf("\n");
	printf("\n");
	return (answer);
}

int	check_ft_strchr(void)
{
	int		answer;
	char	a[] = "bonjorno";
	char	c;

	c = 'o';
	answer = 1;
	printf("__________FT_STRCHR__________\n");
	if (strncmp((strchr(a, c)), (ft_strchr(a, c)), sizeof(a)) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", strchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strchr(a, c));
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", strchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strchr(a, c));
		printf("\n");
		answer = 0;
	}
	c = '\0';
	if (strncmp((strchr(a, c)), (ft_strchr(a, c)), sizeof(a)) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", strchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strchr(a, c));
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", strchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strchr(a, c));
		printf("\n");
		answer = 0;
	}
	printf("\n");
	return (answer);
}

int	check_ft_strlcat(void)
{
	int		answer;
	char	a[5][15] = {"aaaaaa", "  \200  ", "    \0", "Hello", "  hello\200"};
	char	c[5][15] = {"bbbbbb", "sparta", "    \0bbb", "bbbb", "NNNN"};
	char	b[5][15] = {"aaaaaa", "  \200  ", "    \0", "Hello", "  hello\200"};
	char	d[5][15] = {"bbbbbb", "sparta", "    \0bbb", "bbbb", "NNNN"};
	int		len;

	answer = 1;
	printf("__________FT_STRLCAT__________\n");
	len = 5;
	strlcat(a[1], c[1], 7);
	ft_strlcat(b[1], d[1], 7);
	if (a[1][0] == b[1][0])
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", a[1]);
		printf("| mine: ");
		printf("%-12s ", b[1]);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", a[1]);
		printf("| mine: ");
		printf("%-12s ", b[1]);
		printf("\n");
		answer = 0;
	}
	for (int i = 0; i < len; i++)
	{
		strlcat(a[i], c[i], sizeof(a));
		ft_strlcat(b[i], d[i], sizeof(a));
		if (a[i][0] == b[i][0])
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
			answer = 0;
		}
	}
	printf("\n");
	printf("\n");
	return (answer);
}

int	check_ft_strlcpy(void)
{
	int		answer;
	char	a[4][15] = {"", "aaaaaa", "Hello", "null \0"};
	char	b[4][15] = {"hi", "bbbbbbbbbb", "hello world", "copy null \0"};
	char	x[4][15] = {"", "aaaaaa", "Hello", "null \0"};
	char	y[4][15] = {"hi", "bbbbbbbbbb", "hello world", "copy null \0"};

	answer = 1;
	printf("__________FT_STRCPY__________\n");
	for (int i = 0; i < 4; i++)
	{
		ft_strlcpy(a[i], b[i], strlen(a[i - 1]));
		strlcpy(x[i], y[i], strlen(x[i - 1]));
		if (strcmp(a[i], x[i]) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", x[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", x[i]);
			printf("\n");
			answer = 0;
		}
	}
	printf("\n");
	return (answer);
}

int	check_ft_strlen(void)
{
	int		answer;
	int		size;
	int		x;
	int		y;
	char	*a[] = {"Hello my friend", "\0 hello", "paulo is not stupid",
			"paulo is stupid", "", "1112312312412", "wtf is going on here"};

	printf("__________FT_STRLEN__________\n");
	size = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < size; i++)
	{
		x = strlen(a[i]);
		y = ft_strlen(a[i]);
		if (x == y)
		{
			printf("✅  ");
		}
		else
		{
			printf("❌  ");
			answer = 0;
		}
		printf("original: %-12d", x);
		printf(" | ");
		printf("mine: %-12d\n", y);
	}
	printf("\n");
	return (answer);
}

int	check_ft_strncmp(void)
{
	int		answer;
	char	*a[] = {"Hello", "\0", "aaa\300aaa", "Hello", "What if \200",
			"no no more"};
	char	*b[] = {"Hello", "\0", "aaaa", "c", "What if idk",
			"no \300 no more"};
	int		len;
	int		x;
	int		y;

	answer = 1;
	len = sizeof(b) / sizeof(b[1]);
	printf("__________FT_STRCMP__________");
	for (int i = 0; i < len; i++)
	{
		printf("\n");
		x = strncmp(a[i], b[i], len);
		y = ft_strncmp(a[i], b[i], len);
		if (x == y)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12d ", x);
			printf("| mine: ");
			printf("%-12d ", y);
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12d ", x);
			printf("| mine: ");
			printf("%-12d ", y);
			answer = 0;
		}
	}
	printf("\n");
	printf("\n");
	return (answer);
}

int	check_ft_strnstr(void)
{
	char	*c;
	char	*d;
	char	a[5][30] = {"lorem ipsum dolor amet", "Hello my world", "Hello",
			"my name \0is beqa", "aaabcabcd"};
	char	b[5][10] = {"dolor", "my", "llo", "\0is beqa", "aabc"};
	int		len;
	int		answer;
	char	*x;
	char	*y;

	answer = 1;
	printf("__________FT_STRNSTR__________\n");
	x = strnstr(a[4], b[4], -1);
	y = ft_strnstr(a[4], b[4], -1);
	if (strcmp(x, y) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", x);
		printf("| mine: ");
		printf("%-12s ", y);
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", x);
		printf("| mine: ");
		printf("%-12s ", y);
		answer = 0;
	}
	printf("\n");
	len = sizeof(a) / sizeof(a[1]);
	for (int i = 0; i < len; i++)
	{
		c = strnstr((char *)a[i], (char *)b[i], sizeof(a[i]));
		d = ft_strnstr((char *)a[i], (char *)b[i], sizeof(a[i]));
		if (strcmp(c, d) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", c);
			printf("| mine: ");
			printf("%-12s ", d);
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", c);
			printf("| mine: ");
			printf("%-12s ", d);
			answer = 0;
		}
		printf("\n");
	}
	printf("\n");
	return (answer);
}

int	check_ft_strrchr(void)
{
	int		answer;
	char	a[] = "bonjorna";
	char	c;

	c = 'o';
	answer = 1;
	printf("__________FT_STRRCHR__________\n");
	if (strncmp((strrchr(a, c)), (ft_strrchr(a, c)), sizeof(a)) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", strrchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strrchr(a, c));
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", strrchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strrchr(a, c));
		printf("\n");
		answer = 0;
	}
	c = '\0';
	if (strncmp((strrchr(a, c)), (ft_strrchr(a, c)), sizeof(a)) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", strrchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strrchr(a, c));
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", strrchr(a, c));
		printf("| mine: ");
		printf("%-12s ", ft_strrchr(a, c));
		printf("\n");
		answer = 0;
	}
	printf("\n");
	return (answer);
}

int	check_ft_tolower(void)
{
	int	answer;
	int	a[] = {'A', 'Z', 'C', ']', '0'};
	int	len;

	len = sizeof(a) / sizeof(a[1]);
	printf("__________FT_TOLOWER__________\n");
	for (int i = 0; i < len; i++)
	{
		if (tolower(a[i]) == ft_tolower(a[i]))
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12c ", tolower(a[i]));
			printf("| mine: ");
			printf("%-12c ", ft_tolower(a[i]));
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12c ", tolower(a[i]));
			printf("| mine: ");
			printf("%-12c ", ft_tolower(a[i]));
			answer = 0;
		}
		printf("\n");
	}
	printf("\n");
	return (answer);
}

int	check_ft_toupper(void)
{
	int	answer;
	int	a[] = {'a', 'z', 'c', ']', '0'};
	int	len;

	len = sizeof(a) / sizeof(a[1]);
	printf("__________FT_TOUPPER__________\n");
	for (int i = 0; i < len; i++)
	{
		if (toupper(a[i]) == ft_toupper(a[i]))
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12c ", toupper(a[i]));
			printf("| mine: ");
			printf("%-12c ", ft_toupper(a[i]));
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12c ", toupper(a[i]));
			printf("| mine: ");
			printf("%-12c ", ft_tolower(a[i]));
			answer = 0;
		}
		printf("\n");
	}
	printf("\n");
	return (answer);
}

int	check_ft_calloc(void)
{
	int	answer;
	int	x;
	int	y;
	int	*a;
	int	*b;
	int	*c;
	int	*d;

	answer = 1;
	x = 5;
	y = sizeof(int);
	a = calloc(x, y);
	b = ft_calloc(x, y);
	c = calloc(0, 0);
	d = ft_calloc(0, 0);
	printf("__________FT_CALLOC__________\n");
	if (c != NULL || d != NULL)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12d ", c[1]);
		printf("| mine: ");
		printf("%-12d ", d[1]);
	}
	else if (c != NULL && d == NULL)
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12d ", c[4]);
		printf("| mine: ");
		printf("%-12d ", d[4]);
	}
	printf("\n");
	if (a[1] == b[1])
	{
		printf("✅  ");
		printf("original: ");
		for (int i = 0; i < x; i++)
		{
			printf("%d ", a[i]);
		}
		printf("   | mine: ");
		for (int j = 0; j < x; j++)
		{
			printf("%d ", b[j]);
		}
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		for (int i = 0; i < x; i++)
		{
			printf("%d ", a[i]);
		}
		printf("   | mine: ");
		for (int j = 0; j < x; j++)
		{
			printf("%d ", b[j]);
		}
		printf("\n");
		answer = 0;
	}
	free(a);
	free(b);
	free(c);
	free(d);
	printf("\n");
	return (answer);
}

int	check_ft_strdup(void)
{
	int		answer;
	char	a[5][15] = {"aaaaaa", "  \200  ", "    \0", "Hello", "  hello\200"};
	char	b[5][15] = {"aaaaaa", "  \200  ", "    \0", "Hello", "  hello\200"};
	int		len;

	answer = 1;
	printf("__________FT_STRDUP__________\n");
	len = 5;
	strdup(a[1]);
	ft_strdup(b[1]);
	if (a[1][0] == b[1][0])
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", a[1]);
		printf("| mine: ");
		printf("%-12s ", b[1]);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", a[1]);
		printf("| mine: ");
		printf("%-12s ", b[1]);
		printf("\n");
		answer = 0;
	}
	for (int i = 0; i < len; i++)
	{
		strdup(a[i]);
		ft_strdup(b[i]);
		if (a[i][0] == b[i][0])
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", b[i]);
			printf("\n");
			answer = 0;
		}
	}
	printf("\n");
	return (answer);
}

int	check_ft_substr(void)
{
	int		answer;
	char	a[6][19] = {"helloo my friendss", "", "\200Hello",
			"hellaa\0&&dkjhasd", "123hallo\300paulo"};
	char	b[6][19] = {"loo my ", "", "\200Hello", "a\0&&dkj", "hallo\300"};
	char	**c;

	c = malloc(sizeof(a[1]) * sizeof(a));
	answer = 1;
	printf("__________FT_SUBSTR__________\n");
	for (unsigned long i = 0; i < 6; i++)
	{
		c[0] = ft_substr(a[0], 3, 7);
		c[1] = ft_substr(a[1], 0, 0);
		c[2] = ft_substr(a[2], 0, 6);
		c[3] = ft_substr(a[3], 5, 3);
		c[4] = ft_substr(a[4], 3, 6);
		c[5] = ft_substr(a[5], 3, 11);
		if (strcmp(c[i], b[i]) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", b[i]);
			printf("| mine: ");
			printf("%-12s ", c[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", b[i]);
			printf("| mine: ");
			printf("%-12s ", c[i]);
			printf("\n");
			answer = 0;
		}
	}
	free(c);
	printf("\n");
	return (answer);
}

int	check_ft_strjoin(void)
{
	int		answer;
	char	a[5][20] = {"Hello ", " my\0", "", "with \300", "&$^XYP(^)"};
	char	b[5][15] = {"World", "friend", "Hello", "in fun", "he\300"};
	char	c[5][35] = {"Hello World", " myfriend", "Hello", "with \300in fun",
			"&$^XYP(^)he\300"};
	char	**d;

	d = malloc(sizeof(c[1]) * sizeof(c));
	answer = 1;
	printf("__________FT_STRJOIN__________\n");
	for (int i = 0; i < 5; i++)
	{
		d[i] = ft_strjoin(a[i], b[i]);
		if (strcmp(d[i], c[i]) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", c[i]);
			printf("| mine: ");
			printf("%-12s ", d[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", c[i]);
			printf("| mine: ");
			printf("%-12s ", d[i]);
			printf("\n");
			answer = 0;
		}
	}
	free(d);
	printf("\n");
	return (answer);
}

int	check_ft_strtrim(void)
{
	int		answer;
	char	a[5][20] = {"baaaaaaab", " Hello", "", "Help", "&$^XYP(^)"};
	char	b[5][15] = {"bb", " o", "bb", "ap", "))"};
	char	c[5][35] = {"aaaaaaa", "Hell", "", "Hel", "&$^XYP(^"};
	char	**d;
	char	*e;

	d = malloc(sizeof(c[1]) * sizeof(c));
	answer = 1;
	printf("__________FT_STRTRIM__________\n");
	for (int i = 0; i < 5; i++)
	{
		d[i] = ft_strtrim(a[i], b[i]);
		if (strcmp(d[i], c[i]) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", c[i]);
			printf("| mine: ");
			printf("%-12s ", d[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", c[i]);
			printf("| mine: ");
			printf("%-12s ", d[i]);
			printf("\n");
			answer = 0;
		}
	}
	if (!(e = ft_strtrim(NULL, NULL)))
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", e);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", e);
		printf("\n");
		answer = 0;
	}
	free(d);
	printf("\n");
	return (answer);
}

int	check_ft_split(void)
{
	int		answer;
	char	c[7][15] = {"bbbb", "bbb", "hello", "my", "friend", "9-=)(())",
			"Hello World"};
	char	d[4][7][15] = {{"bbbb", "bbb"}, {"hello", "my", "friend"},
			{"9-=)(())"}, {"Hello World"}};
	int		j;
	int		k;
	int		check;

	// char	a[4][15] = {"bbbbabbb", "hello my friend", "9-=)(())",
	// 		"NHello WorldN"};
	// char	b[4] = {'a', ' ', '\0', 'N'};
	// char	***d = malloc((sizeof(c) * sizeof(c[0])) * sizeof(c[0][0]));
	// for (int x = 0; x < 4; x++)
	// {
	// 	d[x] = ft_split(a[x], b[x]);
	// }
	answer = 1;
	printf("__________FT_SPLIT__________\n");
	for (int i = 0; i < 7; i++)
	{
		check = 0;
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 3; k++)
			{
				if (strcmp(c[i], d[j][k]) == 0)
				{
					printf("✅  ");
					printf("original: ");
					printf("%-12s ", c[i]);
					printf("| mine: ");
					printf("%-12s ", d[j][k]);
					printf("\n");
					check = 1;
				}
			}
		}
		if (!check)
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", c[i]);
			printf("| mine: ");
			printf("%-12s ", d[j][k]);
			printf("\n");
			answer = 0;
		}
	}
	// free(d);
	printf("\n");
	return (answer);
}

int	check_ft_itoa(void)
{
	int		answer;
	char	*a[5] = {"111111", "12312312", "0", "1", "-12345"};
	int		b[] = {111111, 12312312, 0, 01, -12345};
	int		len;
	char	**c;

	c = malloc(sizeof(a) * sizeof(a[1]));
	for (int j = 0; j < 5; j++)
	{
		c[j] = ft_itoa(b[j]);
	}
	answer = 1;
	printf("__________FT_ITOA__________\n");
	len = 5;
	if (strcmp(a[1], c[1]) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", a[1]);
		printf("| mine: ");
		printf("%-12s ", c[1]);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", a[1]);
		printf("| mine: ");
		printf("%-12s ", c[1]);
		printf("\n");
		answer = 0;
	}
	for (int i = 0; i < len; i++)
	{
		if (strcmp(a[i], c[i]) == 0)
		{
			printf("✅  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", c[i]);
			printf("\n");
		}
		else
		{
			printf("❌  ");
			printf("original: ");
			printf("%-12s ", a[i]);
			printf("| mine: ");
			printf("%-12s ", c[i]);
			printf("\n");
			answer = 0;
		}
	}
	printf("\n");
	return (answer);
}

char	ft_num(unsigned int i, char str)
{
	char	a;

	a = str + i;
	return (a);
}

int	check_ft_strmapi(void)
{
	int		answer;
	char	*a;
	char	*b;
	char	*c;
	char	*d;
	char	*e;
	char	*f;

	e = NULL;
	answer = 1;
	printf("__________FT_STRMAPI__________\n");
	a = "111111111";
	b = "123456789";
	f = ft_strmapi(e, ft_num);
	c = ft_strmapi(a, ft_num);
	d = ft_strmapi(NULL, ft_num);
	if (strcmp(c, b) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", b);
		printf("| mine: ");
		printf("%-12s ", c);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", b);
		printf("| mine: ");
		printf("%-12s ", c);
		printf("\n");
		answer = 0;
	}
	if (d == NULL)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", d);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", d);
		printf("\n");
		answer = 0;
	}
	if (f == NULL)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", f);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", f);
		printf("\n");
		answer = 0;
	}
	printf("\n");
	return (answer);
}

void	ft_nums(unsigned int i, char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - ('a' - 'A');
	}
	i = i + 1;
}

int	check_ft_striteri(void)
{
	int		answer;
	char	*b;
	char	a[] = "Hello World";

	answer = 1;
	printf("__________FT_STRITERI__________\n");
	b = "HELLO WORLD";
	ft_striteri(a, ft_nums);
	if (strcmp(a, b) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", b);
		printf("| mine: ");
		printf("%-12s ", a);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", b);
		printf("| mine: ");
		printf("%-12s ", a);
		printf("\n");
		answer = 0;
	}
	printf("\n");
	return (answer);
}

int	check_ft_lstnew(void)
{
	int		answer;
	int		*i;
	char	*a;
	t_list	*j;
	t_list	*c;
	t_list	*f;

	answer = 1;
	i = malloc(sizeof(int));
	*i = 155555;
	a = "Hello World";
	j = ft_lstnew(i);
	c = ft_lstnew(a);
	f = ft_lstnew(NULL);
	printf("__________FT_LSTNEW__________\n");
	if (strcmp(a, (char *)c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", a);
		printf("| mine: ");
		printf("%-12s ", (char *)c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", a);
		printf("| mine: ");
		printf("%-12s ", (char *)c->content);
		printf("\n");
		answer = 0;
	}
	if (*i == *((int *)j->content))
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12d ", *i);
		printf("| mine: ");
		printf("%-12d ", *((int *)j->content));
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12d ", *i);
		printf("| mine: ");
		printf("%-12d ", *((int *)j->content));
		printf("\n");
		answer = 0;
	}
	if (f->content == NULL)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", f->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", NULL);
		printf("| mine: ");
		printf("%-12s ", f->content);
		printf("\n");
		answer = 0;
	}
	free(i);
	free(j);
	free(c);
	free(f);
	printf("\n");
	return (answer);
}

int	check_ft_lstadd_front(void)
{
	int		answer;
	t_list	*c;
	char	*fir;
	char	*mid;
	char	*las;

	answer = 1;
	c = NULL;
	ft_lstadd_front(&c, ft_lstnew("World"));
	ft_lstadd_front(&c, ft_lstnew("my"));
	ft_lstadd_front(&c, ft_lstnew("Hello"));
	fir = "Hello";
	mid = "my";
	las = "World";
	printf("__________FT_LSTADD_FRONT__________\n");
	if (strcmp(fir, c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", fir);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", fir);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
		answer = 0;
	}
	c = c->next;
	if (strcmp(mid, c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", mid);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", mid);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
		answer = 0;
	}
	c = c->next;
	if (strcmp(las, c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", las);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", las);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
		answer = 0;
	}
	printf("\n");
	c = NULL;
	free(c);
	return (answer);
}

int	check_ft_lstsize(void)
{
	int		answer;
	t_list	*c;
	int		i;
	t_list	*d;
	int		j;

	answer = 1;
	c = NULL;
	d = malloc(sizeof(t_list));
	d->content = "Hello";
	d->next = NULL;
	ft_lstadd_front(&c, ft_lstnew("World"));
	ft_lstadd_front(&c, ft_lstnew("my"));
	ft_lstadd_front(&c, ft_lstnew("Hello"));
	i = ft_lstsize(c);
	j = ft_lstsize(d);
	printf("__________FT_LSTSIZE__________\n");
	if (i == 3)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12d ", 3);
		printf("| mine: ");
		printf("%-12d ", i);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12d ", 3);
		printf("| mine: ");
		printf("%-12d ", i);
		printf("\n");
		answer = 0;
	}
	if (j == 1)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12d ", 1);
		printf("| mine: ");
		printf("%-12d ", j);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12d ", 1);
		printf("| mine: ");
		printf("%-12d ", j);
		printf("\n");
		answer = 0;
	}
	printf("\n");
	free(c);
	return (answer);
}

int	check_ft_lstlast(void)
{
	int		answer;
	t_list	*c;
	t_list	*a;
	t_list	*d;
	t_list	*b;

	c = NULL;
	answer = 1;
	ft_lstadd_front(&c, ft_lstnew("World"));
	ft_lstadd_front(&c, ft_lstnew("my"));
	ft_lstadd_front(&c, ft_lstnew("Hello"));
	ft_lstadd_back(&d, ft_lstnew("World"));
	ft_lstadd_back(&d, ft_lstnew("my"));
	ft_lstadd_back(&d, ft_lstnew("Hello"));
	a = malloc(sizeof(t_list));
	a = ft_lstlast(c);
	b = malloc(sizeof(t_list));
	b = ft_lstlast(d);
	c = c->next;
	c = c->next;
	printf("__________FT_LSTLAST__________\n");
	if (strcmp((char *)a->content, c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", (char *)a->content);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", (char *)a->content);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
		answer = 0;
	}
	if (strcmp((char *)b->content, d->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", (char *)b->content);
		printf("| mine: ");
		printf("%-12s ", d->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", (char *)b->content);
		printf("| mine: ");
		printf("%-12s ", d->content);
		printf("\n");
		answer = 0;
	}
	printf("\n");
	c = NULL;
	free(c);
	return (answer);
}

int	check_ft_lstadd_back(void)
{
	int		answer;
	t_list	*c;
	char	*fir;
	char	*mid;
	char	*las;

	answer = 1;
	c = NULL;
	ft_lstadd_back(&c, ft_lstnew("I"));
	ft_lstadd_back(&c, ft_lstnew("Love"));
	ft_lstadd_back(&c, ft_lstnew("Coding"));
	fir = "I";
	mid = "Love";
	las = "Coding";
	printf("__________FT_LSTADD_BACK__________\n");
	if (strcmp(fir, c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", fir);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", fir);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
		answer = 0;
	}
	c = c->next;
	if (strcmp(mid, c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", mid);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", mid);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
		answer = 0;
	}
	c = c->next;
	if (strcmp(las, c->content) == 0)
	{
		printf("✅  ");
		printf("original: ");
		printf("%-12s ", las);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
	}
	else
	{
		printf("❌  ");
		printf("original: ");
		printf("%-12s ", las);
		printf("| mine: ");
		printf("%-12s ", c->content);
		printf("\n");
		answer = 0;
	}
	printf("\n");
	c = NULL;
	free(c);
	return (answer);
}

int	main(void)
{
	char	failed_functions[1024];

	!check_ft_atoi() && strcat(failed_functions, "ft_atoi ");
	!check_ft_bzero() && strcat(failed_functions, "ft_bzero ");
	!check_ft_memset() && strcat(failed_functions, "ft_memset ");
	!check_ft_isalnum() && strcat(failed_functions, "ft_isalnum ");
	!check_ft_isalpha() && strcat(failed_functions, "ft_isalpha ");
	!check_ft_isascii() && strcat(failed_functions, "ft_isascii ");
	!check_ft_isdigit() && strcat(failed_functions, "ft_isdigit ");
	!check_ft_isprint() && strcat(failed_functions, "ft_isprint ");
	!check_ft_memchr() && strcat(failed_functions, "ft_memchr ");
	!check_ft_memcmp() && strcat(failed_functions, "ft_memcmp ");
	!check_ft_memcpy() && strcat(failed_functions, "ft_memcpy ");
	!check_ft_memmove() && strcat(failed_functions, "ft_memmove ");
	!check_ft_strchr() && strcat(failed_functions, "ft_strchr ");
	!check_ft_strlcat() && strcat(failed_functions, "ft_strlcat ");
	!check_ft_strlcpy() && strcat(failed_functions, "ft_strlcpy ");
	!check_ft_strlen() && strcat(failed_functions, "ft_strlen ");
	!check_ft_strncmp() && strcat(failed_functions, "ft_strncmp ");
	!check_ft_strnstr() && strcat(failed_functions, "ft_strnstr ");
	!check_ft_strrchr() && strcat(failed_functions, "ft_strrchr ");
	!check_ft_tolower() && strcat(failed_functions, "ft_tolower ");
	!check_ft_toupper() && strcat(failed_functions, "ft_toupper ");
	!check_ft_calloc() && strcat(failed_functions, "ft_calloc ");
	!check_ft_strdup() && strcat(failed_functions, "ft_strdup ");
	!check_ft_substr() && strcat(failed_functions, "ft_substr ");
	!check_ft_strjoin() && strcat(failed_functions, "ft_strjoin ");
	!check_ft_strtrim() && strcat(failed_functions, "ft_strtrim ");
	!check_ft_split() && strcat(failed_functions, "ft_split ");
	!check_ft_itoa() && strcat(failed_functions, "ft_itoa ");
	!check_ft_strmapi() && strcat(failed_functions, "ft_strmapi ");
	!check_ft_striteri() && strcat(failed_functions, "ft_striteri ");
	!check_ft_lstnew() && strcat(failed_functions, "ft_lstnew ");
	!check_ft_lstadd_front() && strcat(failed_functions, "ft_lstadd_front ");
	!check_ft_lstsize() && strcat(failed_functions, "ft_lstsize ");
	!check_ft_lstlast() && strcat(failed_functions, "ft_lstlast ");
	!check_ft_lstadd_back() && strcat(failed_functions, "ft_lstadd_back ");
	printf("\nFailed functions: [ %s ]\n\n", failed_functions);
}
