/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-ho <jcruz-ho@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:12:43 by jcruz-ho          #+#    #+#             */
/*   Updated: 2024/07/01 21:12:47 by jcruz-ho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr (const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);

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
	
	char str1[] = "hello world";
    char str2[] = "abcdefg";
    char str3[] = "xyz";

    // Test 1: find a character that exists in the string
    char* result = ft_strchr(str1, 'o');
    assert(result != NULL);
    assert(*result == 'o');

	// Test 2: find a character that does not exist in the string
    result = ft_strchr(str2, 'x');
    assert(result == NULL);

    // Test 3: find a character at the beginning of the string
    result = ft_strchr(str3, 'x');
    assert(result != NULL);
    assert(*result == 'x');

    // Test 4: find a character at the end of the string
    result = ft_strchr(str1, 'd');
    assert(result != NULL);
    assert(*result == 'd');

    // Test 5: find a character in an empty string
    char str4[] = "";
    result = ft_strchr(str4, 'a');
    assert(result == NULL);

	printf("All tests passed!\n");
	return(0);
}
