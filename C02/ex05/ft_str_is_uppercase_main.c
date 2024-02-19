int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "OMERYUSUFAKYOL";
	char s2[] = "Sen Hiç Mezar Taşına Delikanlı Yazıldığını Gördün mü?";

	printf("%d\n", ft_str_is_uppercase(s1));
	printf("%d", ft_str_is_uppercase(s2));
}