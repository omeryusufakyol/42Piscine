#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((i / 10) + 48);
			ft_putchar((i % 10) + 48);
			write(1, " ", 1);
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
