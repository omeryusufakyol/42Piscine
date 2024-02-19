#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int	main(void)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 42;
	y = -42;
	ft_is_negative(i);
	write(1, "\n", 1);
	ft_is_negative(x);
	write(1, "\n", 1);
	ft_is_negative(y);
}