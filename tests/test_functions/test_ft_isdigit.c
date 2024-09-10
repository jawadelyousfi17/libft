#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "../../libft.h"

void test_ft_isdigit()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "int ft_isdigit(int c)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where -1 <= c <= 255 "
    //        "\033[0m\n"); // Cyan

    int c = -1;
    while (c <= 255)
    {
        assert(ft_isdigit(c) == isdigit(c));
        c++;
    }
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
    ;
}
