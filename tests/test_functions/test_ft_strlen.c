#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../libft.h"

void test_ft_strlen()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "size_t ft_strlen(const char *s)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= strlen(s) <= 100 "
    //        "\033[0m\n"); // Cyan
    assert(strlen("") == ft_strlen(""));
    assert(strlen("hello") == ft_strlen("hello"));
    assert(strlen("Hello - coma") == ft_strlen("Hello - coma"));
    assert(strlen("good bye") == ft_strlen("good bye"));
    assert(strlen("             ") == ft_strlen("             "));
    assert(strlen("kk\0comma") == ft_strlen("kk\0comma"));
    assert(strlen("hello \n in this test \t  ...") == ft_strlen("hello \n in this test \t  ..."));
    assert(strlen("good to c u 123456") == ft_strlen("good to c u 123456"));
    assert(strlen("1337 is great scholl so ?::") == ft_strlen("1337 is great scholl so ?::"));
    assert(strlen("::::::") == ft_strlen("::::::"));
    assert(strlen("\n\n\n\n\\\0\n\0") == ft_strlen("\n\n\n\n\\\0\n\0"));
    assert(strlen("\n\n\n\n\\\0\n\t\r\t") == ft_strlen("\n\n\n\n\\\0\n\t\r\t"));

    printf("\033[1;32m"
           "OK!\n"
           "\033[0m");
    ;
}