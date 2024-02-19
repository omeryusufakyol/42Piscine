char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char dest[] = "Polat Alemdar";
	char src[] = "Ali Candan";

	ft_strcpy(dest, src);
	printf("%s", dest);
}
