void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 5;

	printf("ft_swap'den önce x = %d\n", x);
	printf("ft_swap'den önce y = %d\n", y);
	ft_swap(&x, &y);
	printf("ft_swap'den sonra x = %d\n", x);
	printf("ft_swap'den sonra y = %d", y);
}