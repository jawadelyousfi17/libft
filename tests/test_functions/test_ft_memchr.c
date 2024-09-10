#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <string.h>

void test_ft_memchr()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "void *ft_memchr(const void *s, int c, size_t n)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    void *s1;

    s1 = (char *)"1337";
    assert(ft_memchr(s1, '1', 3) == (s1));
    s1 = (char *)"1337";
    assert(ft_memchr(s1, '0', 3) == NULL);
    s1 = (char *)"1337";
    assert(ft_memchr(s1, '0', 4) == NULL);
    s1 = (char *)"1337";
    assert(ft_memchr(s1, '3', 2) == (s1 + 1));
    s1 = (char *)"1331";
    assert(ft_memchr(s1, '3', 4) == (s1 + 1));
    s1 = (char *)"1331";
    assert(ft_memchr(s1, '1', 4) == (s1));
    assert(ft_memchr(s1, '3', 0) == NULL);
    s1 = (char *)"1337";
    assert(ft_memchr(s1, '7', 4) == (s1 + 3));
    s1 = (char *)"Hello olleH";
    assert(ft_memchr(s1, 'o', 11) == (s1 + 4));
    assert(ft_memchr(s1, 'o', 5) == (s1 + 4));
    assert(ft_memchr(s1, 'l', 11) == (s1 + 2));
    assert(ft_memchr(s1, 'h', 11) == NULL);
    assert(ft_memchr(s1, 'e', 11) == (s1 + 1));
    s1 = (char *)"1337 is a Great school ?";
    assert(ft_memchr(s1, 'G', 24) == (s1 + 10));
    assert(ft_memchr(s1, 'B', 24) == NULL);
    assert(ft_memchr(s1, '?', 24) == (s1 + 23));
    assert(ft_memchr(s1, 'G', 1) == NULL);
    assert(ft_memchr(s1, '1', 1) == (s1));
    s1 = (char *)"";
    assert(ft_memchr(s1, '1', 1) == NULL);
    s1 = NULL;
    assert(ft_memchr(s1, '1', 0) == NULL);
    s1 = (char *)"1337 is a Great school ?";
    assert(ft_memchr(s1 + 5, ' ', 18) == (s1 + 7));
    assert(ft_memchr(s1, ' ', 24) == (s1 + 4));
    assert(ft_memchr(s1 + 5, '\n', 18) == (NULL));
    s1 = (char *)"1337 is\t a\n Great school ?";
    assert(ft_memchr(s1, '\n', 24) == (s1 + 10));
    assert(ft_memchr(s1, '\t', 24) == (s1 + 7));
    assert(ft_memchr(s1, 98514, 24) == NULL);
    assert(ft_memchr(s1, -890, 24) == NULL);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
