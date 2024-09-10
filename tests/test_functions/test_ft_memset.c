#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

void test_ft_memset()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "void *ft_memset(void *s, int c, size_t n)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    void *s1, *s2;

    // Test Case 1: Set all bytes to 'A' in a buffer of size 10

    // Test Case 2: Set all bytes to zero in a buffer of size 10
    s1 = malloc(10);
    s2 = malloc(10);
    assert(memcmp(ft_memset(s1, 0, 10), memset(s2, 0, 10), 10) == 0);
    free(s1);
    free(s2);
    // Test Case 3: Fill buffer of size 1 with 'X'
    s1 = malloc(1);
    s2 = malloc(1);
    assert(memcmp(ft_memset(s1, 'X', 1), memset(s2, 'X', 1), 1) == 0);
    free(s1);
    free(s2);
    // Test Case 4: Fill buffer of size 0 (no change)
    //     s1 = malloc(1);
    //     s2 = malloc(1);
    //     assert(memcmp(ft_memset(s1, 255, 0), memset(s2, 255, 0), 1) == 0);

    // Test Case 5: Fill with different values (all 255)
    s1 = malloc(5);
    s2 = malloc(5);
    assert(memcmp(ft_memset(s1, 255, 5), memset(s2, 255, 5), 5) == 0);
    free(s1);
    free(s2);
    // Test Case 6: Fill only the first half of the buffer
    s1 = malloc(10);
    s2 = malloc(10);
    assert(memcmp(ft_memset(s1, 'B', 5), memset(s2, 'B', 5), 5) == 0);
    free(s1);
    free(s2);
    // Test Case 7: Fill with non-ASCII value (128)
    s1 = malloc(10);
    s2 = malloc(10);
    assert(memcmp(ft_memset(s1, 128, 10), memset(s2, 128, 10), 10) == 0);
    free(s1);
    free(s2);
    // Test Case 8: Fill large buffer with zero
    s1 = malloc(1000);
    s2 = malloc(1000);
    assert(memcmp(ft_memset(s1, 0, 1000), memset(s2, 0, 1000), 1000) == 0);
    free(s1);
    free(s2);
    // Test Case 9: Fill with spaces (' ')
    s1 = malloc(20);
    s2 = malloc(20);
    assert(memcmp(ft_memset(s1, ' ', 20), memset(s2, ' ', 20), 20) == 0);
    free(s1);
    free(s2);
    // Test Case 10: Fill with negative value (-1)
    s1 = malloc(15);
    s2 = malloc(15);
    assert(memcmp(ft_memset(s1, -1, 15), memset(s2, -1, 15), 15) == 0);
    free(s1);
    free(s2);
    // Test Case 11: Fill with 0x7F (127, max ASCII value)
    s1 = malloc(50);
    s2 = malloc(50);
    assert(memcmp(ft_memset(s1, 0x7F, 50), memset(s2, 0x7F, 50), 50) == 0);
    free(s1);
    free(s2);
    // Test Case 12: Fill entire buffer with a value, part of which was already set
    s1 = malloc(10);
    s2 = malloc(10);
    memset(s1, 'A', 5);
    memset(s2, 'A', 5);
    assert(memcmp(ft_memset(s1, 'B', 10), memset(s2, 'B', 10), 10) == 0);
    free(s1);
    free(s2);
    // Test Case 13: Fill buffer of a single element with zero
    s1 = malloc(1);
    s2 = malloc(1);
    assert(memcmp(ft_memset(s1, 0, 1), memset(s2, 0, 1), 1) == 0);
    free(s1);
    free(s2);
    // Test Case 14: Fill with boundary value (0xFF)
    s1 = malloc(64);
    s2 = malloc(64);
    assert(memcmp(ft_memset(s1, 0xFF, 64), memset(s2, 0xFF, 64), 64) == 0);
    free(s1);
    free(s2);
    // Test Case 15: Fill buffer with alternate value (0xAA)
    s1 = malloc(256);
    s2 = malloc(256);
    assert(memcmp(ft_memset(s1, 0xAA, 256), memset(s2, 0xAA, 256), 256) == 0);
    free(s1);
    free(s2);
    // Test Case 16: Fill large buffer with max unsigned value (255)
    s1 = malloc(2048);
    s2 = malloc(2048);
    assert(memcmp(ft_memset(s1, 255, 2048), memset(s2, 255, 2048), 2048) == 0);
    free(s1);
    free(s2);
    // Test Case 17: Fill buffer of uneven size with zero
    s1 = malloc(17);
    s2 = malloc(17);
    assert(memcmp(ft_memset(s1, 0, 17), memset(s2, 0, 17), 17) == 0);
    free(s1);
    free(s2);
    // Test Case 18: Fill very small buffer (1 byte)
    s1 = malloc(1);
    s2 = malloc(1);
    assert(memcmp(ft_memset(s1, '!', 1), memset(s2, '!', 1), 1) == 0);
    free(s1);
    free(s2);
    // Test Case 19: Fill with alternating bits (0x55)
    s1 = malloc(100);
    s2 = malloc(100);
    assert(memcmp(ft_memset(s1, 0x55, 100), memset(s2, 0x55, 100), 100) == 0);
    free(s1);
    free(s2);
    // Test Case 20: Check if `memset` affects beyond allocated memory
    s1 = malloc(10);
    s2 = malloc(10);
    memset(s1, 'A', 10);
    memset(s2, 'A', 10);
    assert(memcmp(ft_memset(s1, 'B', 5), memset(s2, 'B', 5), 10) == 0);

    free(s1);
    free(s2);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}