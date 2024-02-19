int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "omeryusufakyol";
	char s2[] = "Geçmişini Unutan Geleceğini Bulamaz";

	printf("%d\n", ft_str_is_lowercase(s1));
	printf("%d", ft_str_is_lowercase(s2));
}