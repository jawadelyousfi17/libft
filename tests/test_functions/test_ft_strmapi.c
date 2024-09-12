#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char f_upper_case_even_index(unsigned int index, char c)
{
    if (index % 2 == 0 && c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    return (c);
}

void test_ft_strmapi()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_strmapi(char const *s, char (*f)(unsigned int, char))"
           "\033[0m\n"); // Cyan
                         // printf("\033[0;36m"
                         //        "where 0 <= n "
                         //        "\033[0m\n"); // Cyan

    // init
    char *r1 = ft_strmapi("aaa", f_upper_case_even_index);
    assert(strcmp(r1, "AaA") == 0);
    free(r1);

    char *r2 = ft_strmapi("abcdef", f_upper_case_even_index);
    assert(strcmp(r2, "AbCdEf") == 0);
    free(r2);

    char *r3 = ft_strmapi("hello world", f_upper_case_even_index);
    assert(strcmp(r3, "HeLlO WoRlD") == 0);
    free(r3);

    char *r4 = ft_strmapi("123456", f_upper_case_even_index);
    assert(strcmp(r4, "123456") == 0); // Non-alphabetic characters remain unchanged
    free(r4);

    char *r5 = ft_strmapi("", f_upper_case_even_index);
    assert(strcmp(r5, "") == 0); // Empty string case
    free(r5);

    char *r6 = ft_strmapi("ABCDE", f_upper_case_even_index);
    assert(strcmp(r6, "ABCDE") == 0); // All uppercase characters remain unchanged
    free(r6);

    char *r7 = ft_strmapi("aBcDeFgHi", f_upper_case_even_index);
    assert(strcmp(r7, "ABCDEFGHI") == 0);
    free(r7);

    char *r8 = ft_strmapi("apple pie", f_upper_case_even_index);
    assert(strcmp(r8, "ApPlE PiE") == 0);
    free(r8);

    char *r9 = ft_strmapi("UPPER lower", f_upper_case_even_index);
    assert(strcmp(r9, "UPPER LoWeR") == 0); // Mixed uppercase and lowercase
    free(r9);

    char *r10 = ft_strmapi("123abcDEF", f_upper_case_even_index);
    assert(strcmp(r10, "123aBcDEF") == 0);
    free(r10);

    char *r11 = ft_strmapi("case Test", f_upper_case_even_index);
    assert(strcmp(r11, "CaSe TEsT") == 0);
    free(r11);

    char *r12 = ft_strmapi("Hello123", f_upper_case_even_index);
    assert(strcmp(r12, "HeLlO123") == 0);
    free(r12);

    char *r13 = ft_strmapi("mixed123CASE", f_upper_case_even_index);
    assert(strcmp(r13, "MiXeD123CASE") == 0);
    free(r13);

    char *r14 = ft_strmapi("lowercase only", f_upper_case_even_index);
    assert(strcmp(r14, "LoWeRcAsE OnLy") == 0);
    free(r14);

    char *r15 = ft_strmapi("SYMBOLS!@", f_upper_case_even_index);
    assert(strcmp(r15, "SYMBOLS!@") == 0); // Symbols remain unchanged
    free(r15);

    char *r16 = ft_strmapi("test_case_42", f_upper_case_even_index);
    assert(strcmp(r16, "TeSt_cAsE_42") == 0);
    free(r16);

    char *r17 = ft_strmapi(" spaces ", f_upper_case_even_index);
    assert(strcmp(r17, " sPaCeS ") == 0); // Spaces should remain unchanged
    free(r17);

    char *r18 = ft_strmapi("new\nline", f_upper_case_even_index);
    assert(strcmp(r18, "NeW\nLiNe") == 0); // Handles newline characters
    free(r18);

    char *r19 = ft_strmapi("tab\tspace", f_upper_case_even_index);
    assert(strcmp(r19, "TaB\tSpAcE") == 0); // Handles tab characters
    free(r19);

    char *r20 = ft_strmapi("ABCdefGHI", f_upper_case_even_index);
    assert(strcmp(r20, "ABCdEfGHI") == 0); // Uppercase at even positions remains unchanged
    free(r20);

    char *r21 = ft_strmapi("longer test string", f_upper_case_even_index);
    assert(strcmp(r21, "LoNgEr tEsT StRiNg") == 0);
    free(r21);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
