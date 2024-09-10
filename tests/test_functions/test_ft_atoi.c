#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>

void test_ft_atoi()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "int ft_atoi(const char *nptr)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= strlen(nptr) <= 1000 "
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= *nptr < 128"
    //        "\033[0m\n"); // Cyan

    // init
    assert(atoi("") == ft_atoi(""));
    assert(atoi("\t\r\v") == ft_atoi("\t\r\v"));
    assert(atoi("-") == ft_atoi("-"));
    assert(atoi("+") == ft_atoi("+"));
    assert(atoi("  012345") == ft_atoi("  012345"));
    assert(atoi("\t012345") == ft_atoi("\t012345"));
    assert(atoi("\r012345") == ft_atoi("\r012345"));
    assert(atoi("\v012345") == ft_atoi("\v012345"));
    assert(atoi("\n012345") == ft_atoi("\n012345"));
    assert(atoi("\f012345") == ft_atoi("\f012345"));
    assert(atoi("\t-012345") == ft_atoi("\t-012345"));
    assert(atoi("\t+012345") == ft_atoi("\t+012345"));
    assert(atoi("\t012345") == ft_atoi("\t012345"));
    assert(atoi("+-012345") == ft_atoi("+-012345"));
    assert(atoi("+-+-012345") == ft_atoi("+-+-012345"));
    assert(atoi("012a345") == ft_atoi("012a345"));
    assert(atoi(" 012\t345") == ft_atoi(" 012\t345"));
    assert(atoi("2147483647") == ft_atoi("2147483647"));
    assert(atoi("-2147483648") == ft_atoi("2147483648"));
    assert(atoi("01234567890123456789") == ft_atoi("01234567890123456789"));
    assert(atoi("- 89") == ft_atoi("- 89"));
    assert(atoi("\t\v\n + 1337") == ft_atoi("\t\v\n + 1337"));

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n"); // Green
}
