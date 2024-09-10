#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../libft.h"

void test_ft_strlcpy()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "size_t ft_strlcpy(char *dst, const char *src, size_t size)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= size "
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= strlen(src) <= 100"
    //        "\033[0m\n"); // Cyan

    // init
    char dst[100] = "Hello 1337 Im the destination string";
    char src[] = "And I am the source!";

    assert(ft_strlcpy(dst, src, 0) == strlen(src) && strcmp("Hello 1337 Im the destination string", dst) == 0);
    char dst1[100] = "Hello 1337 Im the destination string";
    char src1[] = "And I am the source!";
    assert(ft_strlcpy(dst1, src1, 0) == strlen(src1) && strcmp("Hello 1337 Im the destination string", dst1) == 0);

    char dst2[100] = "Original Destination";
    char src2[] = "Short";
    assert(ft_strlcpy(dst2, src2, 6) == strlen(src2) && strcmp("Short", dst2) == 0);

    char dst3[50] = "Destination with more content";
    char src3[] = "Source content";
    assert(ft_strlcpy(dst3, src3, 5) == strlen(src3) && strcmp("Sour", dst3) == 0);

    char dst4[100] = "Another destination string";
    char src4[] = "Empty";
    assert(ft_strlcpy(dst4, src4, 1) == strlen(src4) && strcmp("", dst4) == 0);

    char dst5[100] = "Full";
    char src5[] = "Longer source string";
    assert(ft_strlcpy(dst5, src5, 100) == strlen(src5) && strcmp("Longer source string", dst5) == 0);

    char dst6[10] = "";
    char src6[] = "";
    assert(ft_strlcpy(dst6, src6, 10) == strlen(src6) && strcmp("", dst6) == 0);

    char dst7[10] = "Short";
    char src7[] = "";
    assert(ft_strlcpy(dst7, src7, 10) == strlen(src7) && strcmp("", dst7) == 0);

    char dst8[50] = "Test for sufficient size";
    char src8[] = "123456789";
    assert(ft_strlcpy(dst8, src8, 10) == strlen(src8) && strcmp("123456789", dst8) == 0);

    char dst9[20] = "Destination";
    char src9[] = "Source";
    assert(ft_strlcpy(dst9, src9, 0) == strlen(src9) && strcmp("Destination", dst9) == 0);

    char dst10[20] = "ABCDEF";
    char src10[] = "XYZ";
    assert(ft_strlcpy(dst10, src10, 4) == strlen(src10) && strcmp("XYZ", dst10) == 0);

    char dst11[30] = "Partial destination";
    char src11[] = "Exact size fit";
    assert(ft_strlcpy(dst11, src11, 15) == strlen(src11) && strcmp("Exact size fit", dst11) == 0);

    char dst12[1] = "";
    char src12[] = "Non-empty source";
    assert(ft_strlcpy(dst12, src12, 1) == strlen(src12) && strcmp("", dst12) == 0);

    char dst13[100] = "Just testing";
    char src13[] = "New source string";
    assert(ft_strlcpy(dst13, src13, 50) == strlen(src13) && strcmp("New source string", dst13) == 0);

    char dst14[50] = "Destination";
    char src14[] = "Another source";
    assert(ft_strlcpy(dst14, src14, 2) == strlen(src14) && strcmp("A", dst14) == 0);

    char dst15[50] = "";
    char src15[] = "";
    assert(ft_strlcpy(dst15, src15, 0) == strlen(src15) && strcmp("", dst15) == 0);

    char dst16[10] = "Hello";
    char src16[] = "World!";
    assert(ft_strlcpy(dst16, src16, 6) == strlen(src16) && strcmp("World", dst16) == 0);

    char dst17[5] = "1234";
    char src17[] = "56789";
    assert(ft_strlcpy(dst17, src17, 5) == strlen(src17) && strcmp("5678", dst17) == 0);

    char dst18[5] = "";
    char src18[] = "abcd";
    assert(ft_strlcpy(dst18, src18, 5) == strlen(src18) && strcmp("abcd", dst18) == 0);

    char dst19[3] = "AA";
    char src19[] = "B";
    assert(ft_strlcpy(dst19, src19, 3) == strlen(src19) && strcmp("B", dst19) == 0);

    char dst20[20] = "Begin";
    char src20[] = "";
    assert(ft_strlcpy(dst20, src20, 20) == strlen(src20) && strcmp("", dst20) == 0);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n"); // Green
}