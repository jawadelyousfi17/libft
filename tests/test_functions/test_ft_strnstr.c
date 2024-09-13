#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../libft.h"
//#include <bsd/string.h>
#include "../big_data.h"

char *strnstr(const char *haystack, const char *needle, size_t len);

void test_ft_strnstr()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_strnstr(const char *big, const char *little, size_t len)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= size "
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= strlen(big) <= 10^4"
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= strlen(little) <= 10^4"
    //        "\033[0m\n"); // Cyan
    // init
    assert(strnstr("Hello", "Hel", 5) == ft_strnstr("Hello", "Hel", 5));
    //assert(strnstr("", "Hel", 0) == ft_strnstr("", "Hel", 0));
    assert(strnstr("1337 is great", "is bad", 12) == strnstr("1337 is great", "is bad", 12));
    assert(strnstr("abcdef", "cd", 6) == ft_strnstr("abcdef", "cd", 6));
    assert(strnstr("abcdef", "gh", 6) == ft_strnstr("abcdef", "gh", 6));
    assert(strnstr("abcdef", "a", 1) == ft_strnstr("abcdef", "a", 1));
    assert(strnstr("abcdef", "f", 6) == ft_strnstr("abcdef", "f", 6));
    assert(strnstr("abcdef", "", 6) == ft_strnstr("abcdef", "", 6));
    assert(strnstr("abcdef", "abcdef", 6) == ft_strnstr("abcdef", "abcdef", 6));
    assert(strnstr("abcdef", "abcdefg", 7) == ft_strnstr("abcdef", "abcdefg", 7));
    assert(strnstr("abcdef", "e", 4) == ft_strnstr("abcdef", "e", 4));
    assert(strnstr("abcdef", "e", 5) == ft_strnstr("abcdef", "e", 5));
    assert(strnstr("abcdefabcdef", "abcdef", 12) == ft_strnstr("abcdefabcdef", "abcdef", 12));
    assert(strnstr("abcdefabcdef", "abcdef", 6) == ft_strnstr("abcdefabcdef", "abcdef", 6));
    assert(strnstr("abcdefabcdef", "def", 9) == ft_strnstr("abcdefabcdef", "def", 9));
    assert(strnstr("Hello World", "World", 11) == ft_strnstr("Hello World", "World", 11));
    assert(strnstr("Hello World", "Hello", 5) == ft_strnstr("Hello World", "Hello", 5));
    assert(strnstr("Hello World", "lo Wo", 10) == ft_strnstr("Hello World", "lo Wo", 10));
    assert(strnstr("Hello World", "world", 11) == ft_strnstr("Hello World", "world", 11));
    assert(strnstr("abcdabcd", "bc", 7) == ft_strnstr("abcdabcd", "bc", 7));
    assert(strnstr("abcdabcd", "bcd", 4) == ft_strnstr("abcdabcd", "bcd", 4));
    assert(strnstr("123456789", "456", 9) == ft_strnstr("123456789", "456", 9));
    assert(strnstr("123456789", "789", 8) == ft_strnstr("123456789", "789", 8));
    assert(strnstr("123456789", "123", 3) == ft_strnstr("123456789", "123", 3));
    assert(strnstr("Mississippi", "issi", 5) == ft_strnstr("Mississippi", "issi", 5));
    assert(strnstr("Mississippi", "issi", 6) == ft_strnstr("Mississippi", "issi", 6));
    assert(strnstr("abcdefgh", "efg", 8) == ft_strnstr("abcdefgh", "efg", 8));
    assert(strnstr("abcdefgh", "efg", 6) == ft_strnstr("abcdefgh", "efg", 6));
    assert(strnstr("do doodo?", "do", 8) == ft_strnstr("do doodo?", "do", 8));
    assert(strnstr("maririmria?", "rim", 11) == ft_strnstr("maririmria?", "rim", 11));
    assert(strnstr(big1, small1, 1000) == ft_strnstr(big1, small1, 1000));
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n"); // Green
}