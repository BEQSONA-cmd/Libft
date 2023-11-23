
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	s;

	i = 0;
	x = 0;
	s = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			s = s * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * s);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	swapped;

	while (size > 0)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			break ;
		size--;
	}
}

void	print_in_sort(int *x, int size)
{
	int	i;

	i = 0;
	ft_sort_int_tab(x, size);
	while (i < size)
	{
		if (i < size && i == size - 1)
		{
			ft_putnbr(x[i]);
			ft_putchar('\n');
		}
		else
		{
			ft_putnbr(x[i]);
			ft_putchar(' ');
			ft_putchar('<');
			ft_putchar(' ');
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	*arr;
	int	i;
	int	j;

	arr = (int *)malloc(sizeof(int) * ac);
	if (arr == NULL)
	{
		return (0);
	}
	i = 1;
	j = 0;
	while (i < ac)
	{
		arr[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	print_in_sort(arr, ac - 1);
	return (0);
}
