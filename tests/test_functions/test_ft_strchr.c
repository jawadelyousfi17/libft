#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../libft.h"

void test_ft_strchr()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_strchr(const char *s, int c)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= c <= 127 "
    //        "\033[0m\n"); // Cyan
    //         printf("\033[0;36m"
    //        "And 0 <= strlen(s) <= 100 "
    //        "\033[0m\n");
    // printf("\033[0;36m" "Test : " "\033[1;37m" "ft_strchr(const char *s, int c)" "\033[0m\n"); // Cyan
    // printf("\033[0;36m" "where -1 <= c <= 255 " "\033[0m\n"); // Cyan
    // printf("\033[0;36m" "and 0 <= strlen(s) <= 100" "\033[0m\n"); // Cyan
    int c = -1;
    while (c <= 255)
    {
        assert(ft_strchr("abcd", c) == strchr("abcd", c));
        assert(ft_strchr("", c) == strchr("", c));
        assert(ft_strchr("hrllojpfe57f76fef*+e8f+7f", c) == strchr("hrllojpfe57f76fef*+e8f+7f", c));
        assert(ft_strchr("jjfe\n\t\04654", c) == strchr("jjfe\n\t\04654", c));
        assert(ft_strchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c) == strchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c));
        assert(ft_strchr("0123456789abcdefghijklmnopqrstuvwxyz", c) == strchr("0123456789abcdefghijklmnopqrstuvwxyz", c));
        assert(ft_strchr("-*-/*\\", c) == strchr("-*-/*\\", c));
        c++;
    }
    printf("\033[1;32m"
           "OK!\n");
}