#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void f_upper_case_even_index(unsigned int index, char *c)
{
    if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
    {
        *c = *c - 32;
    }
}

void test_ft_striteri()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "void ft_striteri(char *s, void (*f)(unsigned int, char *))"
           "\033[0m\n"); // Cyan
                         // printf("\033[0;36m"
                         //        "where 0 <= n "
                         //        "\033[0m\n"); // Cyan

    // init
    char r1[] = "";
    ft_striteri(r1, f_upper_case_even_index);
    assert(strcmp(r1, "") == 0);

   char r2[] = "abcdefgh";
    ft_striteri(r2, f_upper_case_even_index);
    assert(strcmp(r2, "AbCdEfGh") == 0);

    char r3[] = "ABCDEFGH";
    ft_striteri(r3, f_upper_case_even_index);
    assert(strcmp(r3, "ABCDEFGH") == 0);

    char r4[] = "   ";
    ft_striteri(r4, f_upper_case_even_index);
    assert(strcmp(r4, "   ") == 0);

    char r5[] = "123abc456";
    ft_striteri(r5, f_upper_case_even_index);
    assert(strcmp(r5, "123aBc456") == 0);

    char r6[] = "!@#$%^&*()";
    ft_striteri(r6, f_upper_case_even_index);
    assert(strcmp(r6, "!@#$%^&*()") == 0);

    char r7[] = "AaBbCcDdEe";
    ft_striteri(r7, f_upper_case_even_index);
    assert(strcmp(r7, "AaBbCcDdEe") == 0);

    char r8[] = "aaa bbb ccc";
    ft_striteri(r8, f_upper_case_even_index);
    assert(strcmp(r8, "AaA BbB CcC") == 0);

    char r9[10000] = "abcdefghijklmnopqrstuvwxyz";
    ft_striteri(r9, f_upper_case_even_index);
    // Check the result using a loop or other appropriate methods

    char r10[] = "A";
    ft_striteri(r10, f_upper_case_even_index);
    assert(strcmp(r10, "A") == 0);

    char r11[] = "a";
    ft_striteri(r11, f_upper_case_even_index);
    assert(strcmp(r11, "A") == 0);

    char r12[] = "ABCDE";
    ft_striteri(r12, f_upper_case_even_index);
    assert(strcmp(r12, "ABCDE") == 0);

    char r13[] = "1337";
    ft_striteri(r13, f_upper_case_even_index);
    assert(strcmp(r13, "1337") == 0);

    char r14[] = "AaBbCcDdEe";
    ft_striteri(r14, f_upper_case_even_index);
    assert(strcmp(r14, "AaBbCcDdEe") == 0);

    char r15[] = "a a a a a a a";
    ft_striteri(r15, f_upper_case_even_index);
    assert(strcmp(r15, "A A A A A A A") == 0);

    char r16[] = "Hello  EvEryOne INE this City , 1337 is Good ? or bad ? if youre reading thiS meaN ITs GooD! Yeah 1337! aWESomE";
    ft_striteri(r16, f_upper_case_even_index);
    assert(strcmp(r16, "HeLlO  EVERyOnE INE ThIs CItY , 1337 iS GoOd ? oR BaD ? If yOuRe rEaDiNg tHiS MeAN ITs GOoD! YEaH 1337! AWESOmE") == 0);



    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
