#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>

void test_ft_itoa()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_itoa(int n)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= strlen(nptr) <= 1000 "
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= *nptr < 128"
    //        "\033[0m\n"); // Cyan

    // init
    // Test case: test1 - Positive number
    char *test1 = ft_itoa(1337);
    assert(strcmp(test1, "1337") == 0);
    free(test1);

    // Test case: test2 - Zero
    char *test2 = ft_itoa(0);
    assert(strcmp(test2, "0") == 0);
    free(test2);

    // Test case: test3 - Negative number
    char *test3 = ft_itoa(-42);
    assert(strcmp(test3, "-42") == 0);
    free(test3);

    // Test case: test4 - Maximum integer value
    char *test4 = ft_itoa(2147483647);
    assert(strcmp(test4, "2147483647") == 0);
    free(test4);

    // Test case: test5 - Minimum integer value
    char *test5 = ft_itoa(-2147483648);
    assert(strcmp(test5, "-2147483648") == 0);
    free(test5);

    // Test case: test6 - Single-digit positive number
    char *test6 = ft_itoa(7);
    assert(strcmp(test6, "7") == 0);
    free(test6);

    // Test case: test7 - Single-digit negative number
    char *test7 = ft_itoa(-3);
    assert(strcmp(test7, "-3") == 0);
    free(test7);

    // Test case: test8 - Large positive number
    char *test8 = ft_itoa(1000000000);
    assert(strcmp(test8, "1000000000") == 0);
    free(test8);

    // Test case: test9 - Large negative number
    char *test9 = ft_itoa(-1000000000);
    assert(strcmp(test9, "-1000000000") == 0);
    free(test9);

    // Test case: test10 - Small positive number
    char *test10 = ft_itoa(1);
    assert(strcmp(test10, "1") == 0);
    free(test10);

    // Test case: test11 - Small negative number
    char *test11 = ft_itoa(-1);
    assert(strcmp(test11, "-1") == 0);
    free(test11);

    // Test case: test12 - Multiple zeros (to check basic integer-to-string conversion)
    char *test12 = ft_itoa(100);
    assert(strcmp(test12, "100") == 0);
    free(test12);

    // Test case: test13 - Larger negative number
    char *test13 = ft_itoa(-123456);
    assert(strcmp(test13, "-123456") == 0);
    free(test13);

    // Test case: test14 - Large positive number near limit
    char *test14 = ft_itoa(2147483646);
    assert(strcmp(test14, "2147483646") == 0);
    free(test14);

    // Test case: test15 - Smallest two-digit number
    char *test15 = ft_itoa(10);
    assert(strcmp(test15, "10") == 0);
    free(test15);

    // Test case: test16 - Smallest three-digit number
    char *test16 = ft_itoa(100);
    assert(strcmp(test16, "100") == 0);
    free(test16);

    // Test case: test17 - Largest negative single-digit
    char *test17 = ft_itoa(-9);
    assert(strcmp(test17, "-9") == 0);
    free(test17);

    // Test case: test18 - Two-digit negative number
    char *test18 = ft_itoa(-10);
    assert(strcmp(test18, "-10") == 0);
    free(test18);

    // Test case: test19 - Two-digit positive number
    char *test19 = ft_itoa(99);
    assert(strcmp(test19, "99") == 0);
    free(test19);

    // Test case: test20 - Three-digit positive number
    char *test20 = ft_itoa(101);
    assert(strcmp(test20, "101") == 0);
    free(test20);

    // Test case: test21 - Edge case for zero
    char *test21 = ft_itoa(0);
    assert(strcmp(test21, "0") == 0);
    free(test21);

    // Test case: test22 - Very large positive number
    char *test22 = ft_itoa(999999999);
    assert(strcmp(test22, "999999999") == 0);
    free(test22);

    // Test case: test23 - Very small negative number
    char *test23 = ft_itoa(-999999999);
    assert(strcmp(test23, "-999999999") == 0);
    free(test23);

    // Test case: test24 - Largest three-digit number
    char *test24 = ft_itoa(999);
    assert(strcmp(test24, "999") == 0);
    free(test24);

    // Test case: test25 - Largest four-digit number
    char *test25 = ft_itoa(9999);
    assert(strcmp(test25, "9999") == 0);
    free(test25);

    // Test case: test26 - Negative of the largest four-digit number
    char *test26 = ft_itoa(-9999);
    assert(strcmp(test26, "-9999") == 0);
    free(test26);

    // Test case: test27 - Boundary case just below zero
    char *test27 = ft_itoa(-1);
    assert(strcmp(test27, "-1") == 0);
    free(test27);

    // Test case: test28 - Number with alternating digits
    char *test28 = ft_itoa(121212);
    assert(strcmp(test28, "121212") == 0);
    free(test28);

    // Test case: test29 - Smallest two-digit negative number
    char *test29 = ft_itoa(-12);
    assert(strcmp(test29, "-12") == 0);
    free(test29);

    // Test case: test30 - Negative number with multiple digits
    char *test30 = ft_itoa(-987654321);
    assert(strcmp(test30, "-987654321") == 0);
    free(test30);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n"); // Green
}
