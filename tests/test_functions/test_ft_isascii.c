#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "../../libft.h"

void test_ft_isascii()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "int ft_isascii(int c)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where -1000 <= c <= 1000 "
    //        "\033[0m\n"); // Cyan

    int c = -1000;
    while (c <= 1000)
    {
        // printf("C = %d Passed\n",c-1);
        assert(ft_isascii(c) == isascii(c));
        c++;
    }
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
    ;
}