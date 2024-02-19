char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char dest[] = "Zülfü Yüksel";
	char src[] = "Abdülhey";

	ft_strncpy(dest, src, 9);
	printf("%s", dest);
}