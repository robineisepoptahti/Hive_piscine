#include "libft.h"
#include <strings.h>
#include <ctype.h>

/*Helpers for tests*/

void tester(char *i)
{
    printf("%s\n", i);
}
void tester1(unsigned int j, char *i)
{
    printf("%s\n", i);
    printf("%d\n", j);
}
char tester2(char i)
{
    printf("%c\n", i);
    return (i);
}
char tester3(unsigned int j, char i)
{
    printf("%c\n", i);
    printf("%d\n", j);
    return (i);
}

/*TEST FUNCTIONS*/
void test_ft_strlen()
{
    printf("Test ft_strlen:\n");
    printf("ERROR: Expected: 8, Got: %d\n", ft_strlen("Sweissan"));
}

void test_ft_atoi()
{
    printf("Test ft_atoi:\n");
    if (ft_atoi("123") != atoi("123"))
    {
        printf("ERROR:\n");
        printf("Expected: %d, Got: %d\n", atoi("123"), ft_atoi("123"));
    }
    if (ft_atoi("+-3000000") != atoi("+-3000000"))
    {
        printf("ERROR:\n");
        printf("Expected: %d, Got: %d\n", atoi("+-3000000"), ft_atoi("+-3000000"));
    }
    if (ft_atoi("–2147483648") != atoi("–2147483648"))
    {
        printf("ERROR:\n");
        printf("Expected: %d, Got: %d\n", atoi("–2147483648"), ft_atoi("–2147483648"));
    }
}

void test_ft_bzero()
{
    printf("Test ft_bzero:\n");
    char str[] = "Hello";
    ft_bzero(str, 2);
    printf("Expected: llo, Got: %s\n", str + 2);
    printf("Expected: , Got: %s\n", str);
}

static void test_ft_calloc()
{
    printf("Test ft_calloc:\n");
    int *arr = (int *)ft_calloc(5, sizeof(int));
    printf("Expected: 0, Got: %d\n", arr[0]);
    free(arr);
}

void test_ft_isalnum()
{
    printf("Test ft_isalnum:\n");
    if (isalnum('2') != ft_isalnum('2'))
    {
        printf("ERROR\n");
        printf("Expected: %d, Got: %d\n", isalnum('2'), ft_isalnum('2'));
    }
}

void test_ft_isalpha()
{
    printf("Test ft_isalpha:\n");
    if (isalpha('2') != ft_isalpha('2'))
    {
        printf("ERROR\n");
        printf("Expected: %d, Got: %d\n", isalpha('2'), ft_isalpha('2'));
    }
}

void test_ft_isascii()
{
    printf("Test ft_isascii:\n");
    if (isascii('2') != ft_isascii('2'))
    {
        printf("ERROR\n");
        printf("Expected: %d, Got: %d\n", isascii('2'), ft_isascii('2'));
    }
}

void test_ft_isdigit()
{
    printf("Test ft_isdigit:\n");
    if (isdigit('g') != ft_isdigit('g'))
    {
        printf("ERROR\n");
        printf("Expected: %d, Got: %d\n", isdigit('g'), ft_isdigit('g'));
    }
}

void test_ft_isprint()
{
    printf("Test ft_isprint:\n");
    if (isprint('2') != ft_isprint('2'))
    {
        printf("ERROR\n");
        printf("Expected: %d, Got: %d\n", isprint('2'), ft_isprint('2'));
    }
}

void test_ft_isspace()
{
    printf("Test ft_isspace:\n");
    if (isspace(' ') != ft_isspace(' '))
    {
        printf("ERROR\n");
        printf("Expected: %d, Got: %d\n", isspace(' '), ft_isspace(' '));
    }
}

void test_ft_itoa()
{
    printf("Test ft_itoa:\n");
    printf("132 = %s\n", ft_itoa(132));
    printf("-2147483648 = %s\n", ft_itoa(-2147483648));
    printf("0 = %s\n", ft_itoa(-0));
}

void test_ft_memchr()
{
    printf("Test ft_memchr:\n");
    char str[] = "Hello";
    printf("llo = %s\n", (char *)ft_memchr(str, 'l', 5));
    printf("(null) = %s\n", (char *)ft_memchr(str, 'u', 5));
}

void test_ft_memcmp()
{
    printf("Test ft_memcmp:\n");
    if (memcmp("Hello", "Hello", 5) != ft_memcmp("Hello", "Hello", 5))
        printf("ERROR: %d = %d\n", memcmp("Hello", "Hello", 5), ft_memcmp("Hello", "Hello", 5));
    if (memcmp("", "", 0) != ft_memcmp("", "", 0))
        printf("ERROR: %d = %d\n", memcmp("", "", 0), ft_memcmp("", "", 0));
}

void test_ft_memcpy()
{
    printf("Test ft_memcpy:\n");
    char src[] = "Hello";
    char dst[6];
    ft_memcpy(dst, src, 4);
    printf(" Hell = %s\n", dst);
}

void test_ft_memmove()
{
    printf("Test ft_memmove:\n");
    char str[] = "Hello";
    ft_memmove(str + 2, str, 3);
    printf("HeHel = %s\n", str);
}

void test_ft_memset()
{
    printf("Test ft_memset:\n");
    char str[] = "Hello";
    ft_memset(str, 'a', 3);
    printf("aaalo = %s\n", str);
}

void test_ft_strchr()
{
    printf("Test ft_strchr:\n");
    char str[] = "Hello";
    printf("llo = %s\n", ft_strchr(str, 'l'));
}

void test_ft_strdup()
{
    printf("Test ft_strdup:\n");
    char *dup = ft_strdup("Hello");
    printf("Hello = %s\n", dup);
    free(dup);
}

void test_ft_strlcat()
{
    printf("Test ft_strlcat:\n");
    char dst[10] = "Hello";
    char src[] = "World";
    char dst2[10] = "Hello";
    char src2[] = "World";
    if (ft_strlcat(dst, src, 10) != strlcat(dst2, src2, 10))
    {
        printf("ERROR: %lu = %lu\n", ft_strlcat(dst, src, 10), strlcat(dst2, src2, 10));
        printf("%s = %s\n", dst, dst2);
    }
}

void test_ft_strncmp()
{
    printf("Test ft_strncmp:\n");
    char str1[] = "Helloismos";
    char str2[] = "Helloismo";
    if (ft_strncmp(str1, str2, 5) != ft_strncmp(str1, str2, 5))
        printf("ERROR: %d = %d\n", ft_strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
    char str3[] = "";
    char str4[] = "H";
    if (ft_strncmp(str3, str4, 5) != ft_strncmp(str3, str4, 5))
        printf("ERROR: %d = %d\n", ft_strncmp(str3, str4, 5), ft_strncmp(str3, str4, 5));
}

void test_ft_strstr()
{
    printf("Test ft_strstr:\n");
    char haystack[] = "Hello World";
    char needle[] = "World";
    if ((ft_strstr(haystack, needle)) != ft_strstr(haystack, needle))
        printf("ERROR: %s = %s\n", ft_strstr(haystack, needle), ft_strstr(haystack, needle));
    ft_bzero(needle, 6);
    if ((strstr(haystack, needle)) != ft_strstr(haystack, needle))
        printf("ERROR: %s = %s\n", strstr(haystack, needle), ft_strstr(haystack, needle));
}

void test_ft_strnstr()
{
    printf("Test ft_strnstr:\n");
    char haystack[] = "Hello World";
    char needle[] = "W";
    if ((strnstr(haystack, needle, 10)) != ft_strnstr(haystack, needle, 10))
        printf("ERROR: %s = %s\n", strnstr(haystack, needle, 9), ft_strnstr(haystack, needle, 9));
}

void test_ft_strrchr()
{
    printf("Test ft_strrchr:\n");
    char str[] = "Hello";
    printf("lo = %s\n", ft_strrchr(str, 'l'));
}

void test_ft_tolower()
{
    char str[] = "KISSA";
    printf("Test ft_tolower:\n");
    printf("kissa = %s\n", ft_strlowcase(str));
}

void test_ft_toupper()
{
    char str[] = "KISSA";
    printf("Test ft_toupper:\n");
    printf("KISSA = %s\n", ft_strupcase(str));
}

void test_ft_strnew()
{
    printf("Test ft_strnew:\n");
    char *str = ft_strnew(5);
    printf("Expected: \\0\\0\\0\\0\\0, Got: %s\n", str);
    free(str);
}

void test_ft_strdel()
{
    printf("Test ft_strdel:\n");
    char *str = ft_strdup("Hello");
    ft_strdel(&str);
    printf("Expected: (null), Got: %s\n", str);
}

void test_ft_strclr()
{
    printf("Test ft_strclr:\n");
    char str[] = "Hello";
    ft_strclr(str);
    printf("Expected: \\0\\0\\0\\0\\0, Got: %s\n", str);
}

void test_ft_striter()
{
    printf("Test ft_striter:\n");
    char str[] = "hello";
    ft_striter(str, tester);
    printf("Expected: HELLO, Got: %s\n", str);
}

void test_ft_striteri()
{
    printf("Test ft_striteri:\n");
    char str[] = "hello";
    ft_striteri(str, &tester1);
    printf("Expected: HELLO, Got: %s\n", str);
}

void test_ft_strmap()
{
    printf("Test ft_strmap:\n");
    char *str = ft_strmap("hello", tester2);
}

void test_ft_strmapi()
{
    printf("Test ft_strmapi:\n");
    char *str = ft_strmapi("hello", tester3);
    printf("Expected: HELLO, Got: %s\n", str);
    free(str);
}

void test_ft_strequ()
{
    printf("Test ft_strequ:\n");
    printf("Expected: 1, Got: %d\n", ft_strequ("hello", "hello"));
}

void test_ft_strnequ()
{
    printf("Test ft_strnequ:\n");
    printf("Expected: 1, Got: %d\n", ft_strnequ("hello", "hello", 5));
}

void test_ft_strsub()
{
    printf("Test ft_strsub:\n");
    char *sub = ft_strsub("hello", 1, 3);
    printf("Expected: ell, Got: %s\n", sub);
    free(sub);
}

void test_ft_strjoin()
{
    printf("Test ft_strjoin:\n");
    char *joined = ft_strjoin("hello", "world");
    printf("Expected: helloworld, Got: %s\n", joined);
    free(joined);
}

void test_ft_strtrim()
{
    printf("Test ft_strtrim:\n");
    char *trimmed = ft_strtrim("  hello  ");
    printf("Expected: hello, Got: %s\n", trimmed);
    free(trimmed);
}

void test_ft_strsplit()
{
    printf("Test ft_strsplit:\n");
    char **split = ft_strsplit("hello world", ' ');
    printf("Expected: hello, Got: %s\n", split[0]);
    printf("Expected: world, Got: %s\n", split[1]);
    free(split[0]);
    free(split[1]);
    free(split);
}

void test_ft_putendl()
{
    printf("Test ft_putendl:\n");
    ft_putendl("hello");
}

void test_ft_putstr()
{
    printf("Test ft_putstr:\n");
    ft_putstr("hello");
}

void test_ft_putchar()
{
    printf("Test ft_putchar:\n");
    ft_putchar('h');
}

void test_ft_putendl_fd()
{
    printf("Test ft_putendl_fd:\n");
    ft_putendl_fd("hello", 1);
}

void test_ft_putnbr_fd()
{
    printf("Test ft_putnbr_fd:\n");
    ft_putnbr_fd(123, 1);
}

void test_ft_putstr_fd()
{
    printf("Test ft_putstr_fd:\n");
    ft_putstr_fd("hello", 1);
}

void test_ft_putchar_fd()
{
    printf("Test ft_putchar_fd:\n");
    ft_putchar_fd('h', 1);
}

int main()
{
    char choice[50];
    printf("Enter the function name to test: ");
    scanf("%s", choice);

    printf("\n");
    if ((strcmp(choice, "strlen") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strlen();
    }
    if ((strcmp(choice, "atoi") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_atoi();
    }
    if ((strcmp(choice, "bzero") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_bzero();
    }
    if ((strcmp(choice, "calloc") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_calloc();
    }
    if ((strcmp(choice, "isalnum") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_isalnum();
    }
    if ((strcmp(choice, "isalpha") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_isalpha();
    }
    if ((strcmp(choice, "isascii") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_isascii();
    }
    if ((strcmp(choice, "isdigit") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_isdigit();
    }
    if ((strcmp(choice, "isprint") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_isprint();
    }
    if ((strcmp(choice, "isspace") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_isspace();
    }
    if ((strcmp(choice, "itoa") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_itoa();
    }
    if ((strcmp(choice, "memchr") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_memchr();
    }
    if ((strcmp(choice, "memcmp") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_memcmp();
    }
    if ((strcmp(choice, "memcpy") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_memcpy();
    }
    if ((strcmp(choice, "memmove") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_memmove();
    }
    if ((strcmp(choice, "memset") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_memset();
    }
    if ((strcmp(choice, "strchr") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strchr();
    }
    if ((strcmp(choice, "strdup") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strdup();
    }
    if ((strcmp(choice, "strlcat") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strlcat();
    }
    if ((strcmp(choice, "strncmp") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strncmp();
    }
    if ((strcmp(choice, "strstr") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strstr();
    }
    if ((strcmp(choice, "strnstr") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strnstr();
    }
    if ((strcmp(choice, "strrchr") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strrchr();
    }
    if ((strcmp(choice, "strlowcase") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_tolower();
    }
    if ((strcmp(choice, "strupcase") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_toupper();
    }
    if ((strcmp(choice, "strnew") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strnew();
    }
    if ((strcmp(choice, "strdel") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strdel();
    }
    if ((strcmp(choice, "strclr") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strclr();
    }
    if ((strcmp(choice, "striter") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_striter();
    }
    if ((strcmp(choice, "striteri") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_striteri();
    }
    if ((strcmp(choice, "strmap") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strmap();
    }
    if ((strcmp(choice, "strmapi") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strmapi();
    }
    if ((strcmp(choice, "strequ") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strequ();
    }
    if ((strcmp(choice, "strnequ") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strnequ();
    }
    if ((strcmp(choice, "strsub") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strsub();
    }
    if ((strcmp(choice, "strjoin") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strjoin();
    }
    if ((strcmp(choice, "strtrim") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strtrim();
    }
    if ((strcmp(choice, "strsplit") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_strsplit();
    }
    if ((strcmp(choice, "putendl") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_putendl();
    }
    if ((strcmp(choice, "putstr") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_putstr();
    }
    if ((strcmp(choice, "putchar") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_putchar();
    }
    if ((strcmp(choice, "putendl_fd") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_putendl_fd();
    }
    if ((strcmp(choice, "putnbr_fd") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_putnbr_fd();
    }
    if ((strcmp(choice, "putstr_fd") == 0) || (strcmp(choice, "all") == 0))
    {
        printf("\n");
        test_ft_putstr_fd();
    }
    if ((strcmp(choice, "putchar_fd") == 0) || (strcmp(choice, "all") == 0))
        test_ft_putchar_fd();
    else
        printf("Search complete.\n");
    return 0;
}