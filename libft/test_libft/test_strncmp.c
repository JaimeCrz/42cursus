#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return (0);
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
  
    // Test 1: identical strings
    char s1[] = "hello";
    char s2[] = "hello";
    if (ft_strncmp(s1, s2, 5) != 0) {
        printf("Test 1 failed\n");
        return 1;
    }

    // Test 2: different strings
    char s3[] = "hello";
    char s4[] = "world";
    if (ft_strncmp(s3, s4, 5) == 0) {
        printf("Test 2 failed\n");
        return 1;
    }

    // Test 3: n is less than the length of the strings
    char s5[] = "hello";
    char s6[] = "hello world";
    if (ft_strncmp(s5, s6, 5) != 0) {
        printf("Test 3 failed\n");
        return 1;
    }

    // Test 4: s1 is shorter than s2
    char s7[] = "hello";
    char s8[] = "hello world";
    if (ft_strncmp(s7, s8, 10) != 0) {
        printf("Test 4 failed\n");
        return 1;
    }

    // Test 5: s2 is shorter than s1
    char s9[] = "hello world";
    char s10[] = "hello";
    if (ft_strncmp(s9, s10, 10) != 0) {
        printf("Test 5 failed\n");
        return 1;
    }

    // Test 6: n is 0
    char s11[] = "hello";
    char s12[] = "world";
    if (ft_strncmp(s11, s12, 0) != 0) {
        printf("Test 6 failed\n");
        return 1;
    }
    printf("All tests passed\n");

	return (0);
}
