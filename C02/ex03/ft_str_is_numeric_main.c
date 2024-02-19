int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "0123456789";
	char s2[] = "Benim Yaşayan Bir Düşmanım Yok!";

	printf("%d\n", ft_str_is_numeric(s1));
	printf("%d", ft_str_is_numeric(s2));
}