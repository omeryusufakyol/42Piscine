char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "HAYALLERI KUCUK OLANIN ADIMLARI KUCUK OLUR!";

	ft_strlowcase(str);
	printf("%s", str);
}