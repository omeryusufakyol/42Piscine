int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "  Ben Omer Yusuf Akyol";
	char s2[] = "	Ben Ömer Yusuf Akyol";

	printf("%d\n", ft_str_is_printable(s1));
	printf("%d", ft_str_is_printable(s2));
}