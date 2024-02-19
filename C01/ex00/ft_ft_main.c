void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = 21;
	ft_ft(&i);
	printf("%d", i);
}
