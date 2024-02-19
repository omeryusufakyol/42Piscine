void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main(void)
{
	int	o;
	int	m;
	int e;
	int	r;

	o = 10;
	m = 3;
	e = 0;
	r = 0;
	
	ft_div_mod(o, m, &e, &r);
	printf("Bölüm = %d\nKalan = %d", e, r);
}