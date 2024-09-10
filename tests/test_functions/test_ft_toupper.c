#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "../../libft.h"

void test_ft_toupper()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "int ft_toupper(int c)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where -1 <= c <= 255 "
    //        "\033[0m\n"); // Cyan
    int c = -1;
    while (c <= 255)
    {
        // printf("C = %d Passed\n",c-1);
        assert(ft_toupper(c) == toupper(c));
        c++;
    }
    printf("\033[1;32m"
           "OK!\n"
           "\033[0m");
    ;
}