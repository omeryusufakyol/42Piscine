int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "DostumOlmazHasmimYasamaz";
	char s2[] = "SAKIN 30 YIL HUKUKUN OLMAYAN BIRINE SAKIN DEME...";

	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d", ft_str_is_alpha(s2));
}