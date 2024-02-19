void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		tmp = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = tmp;
		size--;
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;
	int	i;

	i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
