#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../libft.h"

void test_ft_strrchr()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_strrchr(const char *s, int c)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= c <= 127 "
    //        "\033[0m\n"); // Cyan
    //         printf("\033[0;36m"
    //        "And 0 <= strlen(s) <= 100 "
    //        "\033[0m\n");

    int c = -1;
    while (c <= 255)
    {
        assert(ft_strrchr("abcd", c) == strrchr("abcd", c));
        assert(ft_strrchr("", c) == strrchr("", c));
        assert(ft_strrchr("hrllojpfe57f76fef*+e8f+7f", c) == strrchr("hrllojpfe57f76fef*+e8f+7f", c));
        assert(ft_strrchr("jjfe\n\t\04654", c) == strrchr("jjfe\n\t\04654", c));
        assert(ft_strrchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c) == strrchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c));
        assert(ft_strrchr("0123456789abcdefghijklmnopqrstuvwxyz", c) == strrchr("0123456789abcdefghijklmnopqrstuvwxyz", c));
        assert(ft_strrchr("-*-/*\\", c) == strrchr("-*-/*\\", c));
        // printf("  C = %d Passed\n", c);
        c++;
    }
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n"); // Green
}