#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../libft.h"
// #include <bsd/string.h>

size_t strlcat(char *dst, const char *src, size_t dstsize);

void test_ft_strlcat()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "size_t ft_strlcat(char *dst, const char *src, size_t size)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= size "
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= strlen(dst) <= 100"
    //        "\033[0m\n"); // Cyan
    //         printf("\033[0;36m"
    //        "and 0 <= strlen(src) <= 100"
    //        "\033[0m\n"); // Cyan

    // init
    char dst[100] = "Hello 1337 Im the destination string";
    char f_dst[100] = "Hello 1337 Im the destination string";
    char src[] = "And I am the source!";
    assert(ft_strlcat(f_dst, src, 10) == strlcat(dst, src, 10));
    assert(strcmp(dst, f_dst) == 0);
    assert(strlen(f_dst) == strlen(dst));

    // Test Case 1: Basic concatenation with limit
    char dst1[100] = "Hello";
    char f_dst1[100] = "Hello";
    char src1[] = " World!";
    assert(ft_strlcat(f_dst1, src1, 100) == strlcat(dst1, src1, 100));
    assert(strcmp(dst1, f_dst1) == 0);
    assert(strlen(f_dst1) == strlen(dst1));

    // Test Case 2: Zero size limit
    char dst2[100] = "Hello";
    char f_dst2[100] = "Hello";
    char src2[] = " World!";
    assert(ft_strlcat(f_dst2, src2, 0) == strlcat(dst2, src2, 0));
    assert(strcmp(dst2, f_dst2) == 0);

    // Test Case 3: Exact size limit equal to destination length
    char dst3[100] = "Hello";
    char f_dst3[100] = "Hello";
    char src3[] = " World!";
    assert(ft_strlcat(f_dst3, src3, 5) == strlcat(dst3, src3, 5));
    assert(strcmp(dst3, f_dst3) == 0);

    // Test Case 4: Size limit larger than combined length
    char dst4[100] = "12345";
    char f_dst4[100] = "12345";
    char src4[] = "67890";
    assert(ft_strlcat(f_dst4, src4, 20) == strlcat(dst4, src4, 20));
    assert(strcmp(dst4, f_dst4) == 0);

    // Test Case 5: Concatenating an empty source string
    char dst5[100] = "Destination";
    char f_dst5[100] = "Destination";
    char src5[] = "";
    assert(ft_strlcat(f_dst5, src5, 50) == strlcat(dst5, src5, 50));
    assert(strcmp(dst5, f_dst5) == 0);

    // Test Case 6: Concatenating to an empty destination string
    char dst6[100] = "";
    char f_dst6[100] = "";
    char src6[] = "Source only";
    assert(ft_strlcat(f_dst6, src6, 50) == strlcat(dst6, src6, 50));
    assert(strcmp(dst6, f_dst6) == 0);

    // Test Case 7: Concatenating with a size limit that just fits
    char dst7[100] = "1234";
    char f_dst7[100] = "1234";
    char src7[] = "5678";
    assert(ft_strlcat(f_dst7, src7, 9) == strlcat(dst7, src7, 9));
    assert(strcmp(dst7, f_dst7) == 0);

    // Test Case 8: Large size limit with large destination and source
    char dst8[500] = "Large buffer";
    char f_dst8[500] = "Large buffer";
    char src8[] = " appended to a large buffer.";
    assert(ft_strlcat(f_dst8, src8, 500) == strlcat(dst8, src8, 500));
    assert(strcmp(dst8, f_dst8) == 0);

    // Test Case 9: Size limit smaller than destination length
    char dst9[100] = "Overflow";
    char f_dst9[100] = "Overflow";
    char src9[] = " will not fit";
    assert(ft_strlcat(f_dst9, src9, 5) == strlcat(dst9, src9, 5));
    assert(strcmp(dst9, f_dst9) == 0);

    // Test Case 10: Size limit of 1
    char dst10[100] = "Limited";
    char f_dst10[100] = "Limited";
    char src10[] = "Size";
    assert(ft_strlcat(f_dst10, src10, 1) == strlcat(dst10, src10, 1));
    assert(strcmp(dst10, f_dst10) == 0);

    // Test Case 11: Source larger than destination
    char dst11[100] = "Fit";
    char f_dst11[100] = "Fit";
    char src11[] = "This is a much larger string.";
    assert(ft_strlcat(f_dst11, src11, 10) == strlcat(dst11, src11, 10));
    assert(strcmp(dst11, f_dst11) == 0);

    // Test Case 12: Source exactly fits into the remaining size
    char dst12[100] = "End";
    char f_dst12[100] = "End";
    char src12[] = "Finish";
    assert(ft_strlcat(f_dst12, src12, 10) == strlcat(dst12, src12, 10));
    assert(strcmp(dst12, f_dst12) == 0);

    // Test Case 13: Concatenate a string with itself
//     char dst13[100] = "Self";
//     char f_dst13[100] = "Self";
//     assert(ft_strlcat(f_dst13, f_dst13, 8) == strlcat(dst13, dst13, 8));
//     assert(strcmp(dst13, f_dst13) == 0);

    // Test Case 14: Concatenating a small string to a very large string
    char dst14[500] = "A";
    char f_dst14[500] = "A";
    char src14[] = " small addition to a large string";
    assert(ft_strlcat(f_dst14, src14, 500) == strlcat(dst14, src14, 500));
    assert(strcmp(dst14, f_dst14) == 0);

    // Test Case 15: Concatenating with size limit equal to zero length source
    char dst15[100] = "Final";
    char f_dst15[100] = "Final";
    char src15[] = "";
    assert(ft_strlcat(f_dst15, src15, 10) == strlcat(dst15, src15, 10));
    assert(strcmp(dst15, f_dst15) == 0);

    // Test Case 16: Concatenate with insufficient space for null terminator
    char dst16[100] = "NullTerminator";
    char f_dst16[100] = "NullTerminator";
    char src16[] = "Check";
    assert(ft_strlcat(f_dst16, src16, 15) == strlcat(dst16, src16, 15));
    assert(strcmp(dst16, f_dst16) == 0);

    // Test Case 17: Empty destination and empty source
    char dst17[100] = "";
    char f_dst17[100] = "";
    char src17[] = "";
    assert(ft_strlcat(f_dst17, src17, 100) == strlcat(dst17, src17, 100));
    assert(strcmp(dst17, f_dst17) == 0);

    // Test Case 18: Concatenating non-overlapping strings
    char dst18[100] = "Left";
    char f_dst18[100] = "Left";
    char src18[] = "Right";
    assert(ft_strlcat(f_dst18, src18, 10) == strlcat(dst18, src18, 10));
    assert(strcmp(dst18, f_dst18) == 0);

    // Test Case 19: Size limit greater than source length but less than destination length
    char dst19[100] = "Medium";
    char f_dst19[100] = "Medium";
    char src19[] = "Size";
    assert(ft_strlcat(f_dst19, src19, 8) == strlcat(dst19, src19, 8));
    assert(strcmp(dst19, f_dst19) == 0);

//     char dst20[100] = "1337";
//     char f_dst20[100] = "1337";
//     assert(ft_strlcat(f_dst20, f_dst20, 8) == strlcat(dst20, dst20, 8));
//     assert(strcmp(f_dst20, dst20) == 0);
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n"); // Green
}