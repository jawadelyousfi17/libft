#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

void test_ft_memcmp()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "int ft_memcmp(const void *s1, const void *s2, size_t n)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    void *s1, *s2;

    // Test Case 1: Set all bytes to 'A' in a buffer of size 10
    s1 = (char *)"1337";
    s2 = (char *)"1337";
    assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 4));
    assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
    assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
    assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
    s1 = (char *)"1337";
    s2 = (char *)"1338";
    assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 4));
    assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
    assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
    assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
    s1 = (char *)"1331";
    s2 = (char *)"3113";
    assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 4));
    assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
    assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
    assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
    s1 = (char *)"misimiss";
    s2 = (char *)"mismsims";
    assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 6));
    assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
    assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
    assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
    s1 = (char *)"aaBBccDDee";
    s2 = (char *)"aaBBccDDef";
    assert(memcmp(s1, s2, 10) == ft_memcmp(s1, s2, 10));
    assert(memcmp(s1, s2, 5) == ft_memcmp(s1, s2, 5));
    assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
    assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
    s1 = (char *)"Hello\t1337";
    s2 = (char *)"Hello\t1337";
    assert(memcmp(s1, s2, 10) == ft_memcmp(s1, s2, 10));
    assert(memcmp(s1, s2, 9) == ft_memcmp(s1, s2, 9));
    assert(memcmp(s1, s2, 8) == ft_memcmp(s1, s2, 8));
    assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
    s1 = (char *)"Hello\n\0\rworld";
    s2 = (char *)"Hello\n\0\rworld";
    assert(memcmp(s1, s2, 13) == ft_memcmp(s1, s2, 13));
    assert(memcmp(s1, s2, 10) == ft_memcmp(s1, s2, 10));
    assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
    assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
    assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
    void *s3 = malloc(100);
    void *s4 = malloc(100);
    assert(memcmp(s3, s4, 13) == ft_memcmp(s3, s4, 13));
    assert(memcmp(s3, s4, 10) == ft_memcmp(s3, s4, 10));
    assert(memcmp(s3, s4, 2) == ft_memcmp(s3, s4, 2));
    assert(memcmp(s3, s4, 1) == ft_memcmp(s3, s4, 1));
    assert(memcmp(s3, s4, 0) == ft_memcmp(s3, s4, 0));
    free(s3);
    free(s4);
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
