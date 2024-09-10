#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

int is_bzero(void *ptr, size_t n)
{
    size_t index;
    index = 0;
    while (index < n)
    {
        if (((unsigned char *)ptr)[index] != '\0')
        {
            return (0);
        }
        index++;
    }
    return (1);
}

int is_not_bzero(void *ptr, size_t start, size_t n)
{
    size_t index;
    index = start;
    while (index < n)
    {
        if (((unsigned char *)ptr)[index] == '\0')
        {
            return (0);
        }
        index++;
    }
    return (1);
}

void test_ft_strdup()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           " char *strdup(const char *s);"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    char str[50] = "1337";
    char *newstr = ft_strdup(str);
    assert(strcmp(newstr, str) == 0);
    free(newstr);

    char str1[50] = "1337 Is a great schol ok ? \n";
    char *newstr1 = ft_strdup(str1);
    assert(strcmp(newstr1, str1) == 0);
    free(newstr1);

    char str2[2] = "1";
    char *newstr2 = ft_strdup(str2);
    assert(strcmp(newstr2, str2) == 0);
    free(newstr2);

    char str3[1] = "";
    char *newstr3 = ft_strdup(str3);
    assert(strcmp(newstr3, str3) == 0);
    free(newstr3);

    char str4[100] = "abcdefghijklmnopqrstuvwxyz1234567890+-*/\n\t\v";
    char *newstr4 = ft_strdup(str4);
    assert(strcmp(newstr4, str4) == 0);
    free(newstr4);

    // Test 3: String with special characters
    char str12[30] = "!@#$%^&*()_+-=[]{}|;:'\",.<>/?";
    char *newstr12 = ft_strdup(str12);
    assert(strcmp(newstr12, str12) == 0);
    free(newstr12);

    // Test 4: Long string
    char str13[100] = "This is a very long string to test the strdup function's ability to handle long strings properly.";
    char *newstr13 = ft_strdup(str13);
    assert(strcmp(newstr13, str13) == 0);
    free(newstr13);

    // Test 5: String with newline characters
    char str14[50] = "Hello, world!\nThis is a test.\n";
    char *newstr14 = ft_strdup(str14);
    assert(strcmp(newstr14, str14) == 0);
    free(newstr14);

    // Test 6: String with tab characters
    char str15[30] = "Tabbed\tstring\twith\ttabs.";
    char *newstr15 = ft_strdup(str15);
    assert(strcmp(newstr15, str15) == 0);
    free(newstr15);

    // // Test 7: String with Unicode characters
    // char str16[50] = "こんにちは世界"; // "Hello, world" in Japanese
    // char *newstr16 = ft_strdup(str16);
    // assert(strcmp(newstr16, str16) == 0);
    // free(newstr16);

    // Test 8: String with single character
    char str17[2] = "A";
    char *newstr17 = ft_strdup(str17);
    assert(strcmp(newstr17, str17) == 0);
    free(newstr17);

    // Test 9: String with null terminator only
    char str18[1] = "\0";
    char *newstr18 = ft_strdup(str18);
    assert(strcmp(newstr18, str18) == 0);
    free(newstr18);

    // Test 10: String with repeating characters
    char str19[20] = "aaaaaaabbbbbbb";
    char *newstr19 = ft_strdup(str19);
    assert(strcmp(newstr19, str19) == 0);
    free(newstr19);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
