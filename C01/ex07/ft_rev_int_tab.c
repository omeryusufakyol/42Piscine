void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	tmp;

	x = size - 1;
	i = 0;
	while (i <= size / 2)
	{
		tmp = tab[x];
		tab[x] = tab[i];
		tab[i] = tmp;
		x--;
		i++;
	}
}
