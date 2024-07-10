#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>


char *ft_strrchr (const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	while ( i > 0 )
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}


int main(int ac, char *av[])
{
 	//	int a;
	//	a = av[1][0];
	printf("AC printing: %d\n", ac);
	printf("Arguments are here %s\n", av[1]);

	//Oficial alpha
	//printf("Original:  %d\n", strlcat(av[1], av[2], 5));
	// My alpha.
	//printf("ft_version: %ld\n", ft_strlen(av[1], av[2]));
	
	char str[] = "hello world";
    char c = 'o';
    char *result = ft_strrchr(str, c);

    if (result != NULL)
        printf("Last occurrence of '%c' is at index %ld\n", c, result - str);
    else
        printf("Character '%c' not found in the string\n", c);
    return (0);	
}
