#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <bsd/string.h>
#include <string.h>

int is_bzero(void *ptr, size_t n)
{
    size_t index;
    index = 0;
    while (index < n)
    {
        if (((unsigned char*)ptr)[index] != '\0')
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
        if (((unsigned char*)ptr)[index] == '\0')
        {
            return (0);
        }
        index++;
    }
    return (1);
}

void test_ft_bzero()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "void ft_bzero(void *s, size_t n)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    char str[50] = "hello 1337 How are you ?";
    ft_bzero(str + 2, 2);
    assert(strcmp(str, "he") == 0);

    char str1[50] = "Were fine & you ?";
    ft_bzero(str1 + 4, 2);
    assert(strcmp(str1, "Were") == 0);

    char str2[50] = "Were fine & you ?";
    ft_bzero(str2 + 10, 40);
    assert(strcmp(str2, "Were fine ") == 0);

    char str3[50] = "Were fine & you ?";
    ft_bzero(str3 + 10, 0);
    assert(strcmp(str3, "Were fine & you ?") == 0);

    char str4[100] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str4,20);
    assert(is_bzero(str4,20));

    char str5[50] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str5,20);
    assert(is_bzero(str5,20));  

    char str8[50] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str8,15);
    assert(is_bzero(str8,15));

    char str7[50] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str7,0);
    assert(is_bzero(str7,0));

    char str6[60] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str6,30);
    assert(is_bzero(str6,30));

    char str10[60] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str10,4);
    assert(is_not_bzero(str10, 4, 48));

    char str11[60] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str11,0);
    assert(is_not_bzero(str11,0, 48));

    char str12[60] = "Hello 1337 How are you doing ? Everything Oky ? ";
    ft_bzero(str12,20);
    assert(is_not_bzero(str12, 20, 48));


    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
