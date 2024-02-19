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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	str = ft_strlowcase(str);
	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (x == 1)
			{
				str[i] -= 32;
				x = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			x = 0;
		else
			x = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
}