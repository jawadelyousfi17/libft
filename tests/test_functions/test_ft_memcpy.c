#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

void test_ft_memcpy()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "void *ft_memcpy(void *dest, const void *src, size_t n);"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    //     void *s1, *s2;

    char src1[] = "hello";
    char dest1[20];
    char dest2[20];
    memcpy(dest1, src1, 5);
    ft_memcpy(dest2, src1, 5);
    assert(memcmp(dest1, dest2, 5) == 0);
    // 1. Test copying an empty string
    char src2[] = "";
    memcpy(dest1, src2, 1);
    ft_memcpy(dest2, src2, 1);
    assert(memcmp(dest1, dest2, 1) == 0);
    // 2. Test copying a string with length 0
    memcpy(dest1, src1, 0);
    ft_memcpy(dest2, src1, 0);
    assert(memcmp(dest1, dest2, 0) == 0);

    // 3. Test copying a string with null character in the middle
    char src3[] = "test\0ing";
    memcpy(dest1, src3, 8);
    ft_memcpy(dest2, src3, 8);
    assert(memcmp(dest1, dest2, 8) == 0);

    // 4. Test copying a string to the start of another
    char src4[] = "1234567890";
    memcpy(dest1, src4, 10);
    ft_memcpy(dest2, src4, 10);
    assert(memcmp(dest1, dest2, 10) == 0);

    // 5. Test copying overlapping memory regions (src before dest)
    // memcpy(dest1, dest1 + 2, 5);
    // ft_memcpy(dest2, dest2 + 2, 5);
    // assert(memcmp(dest1, dest2, 5) == 0);

    // 6. Test copying overlapping memory regions (src after dest)
    // memcpy(dest1 + 2, dest1, 5);
    // ft_memcpy(dest2 + 2, dest2, 5);
    // assert(memcmp(dest1, dest2, 7) == 0);

    // 7. Test copying a large buffer
    char src5[1000], dest3[1000], dest4[1000];
    memset(src5, 'A', 1000);
    memcpy(dest3, src5, 1000);
    ft_memcpy(dest4, src5, 1000);
    assert(memcmp(dest3, dest4, 1000) == 0);

    // 8. Test copying with different characters
    char src6[] = "abcdABCD1234!@#$";
    memcpy(dest1, src6, 16);
    ft_memcpy(dest2, src6, 16);
    assert(memcmp(dest1, dest2, 16) == 0);

    // 9. Test copying with spaces
    char src7[] = "   spaces   ";
    memcpy(dest1, src7, 12);
    ft_memcpy(dest2, src7, 12);
    assert(memcmp(dest1, dest2, 12) == 0);

    // 10. Test copying non-printable characters
    char src8[] = "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A";
    memcpy(dest1, src8, 10);
    ft_memcpy(dest2, src8, 10);
    assert(memcmp(dest1, dest2, 10) == 0);

    // 11. Test copying from an uninitialized source
    char src9[20];
    memcpy(dest1, src9, 20);
    ft_memcpy(dest2, src9, 20);
    assert(memcmp(dest1, dest2, 20) == 0);

    // 12. Test copying to an uninitialized destination
    char dest5[20], dest6[20];
    memcpy(dest5, src1, 5);
    ft_memcpy(dest6, src1, 5);
    assert(memcmp(dest5, dest6, 5) == 0);

    // 13. Test copying a large number of zeros
    char src10[100] = {0};
    memcpy(dest1, src10, 20);
    ft_memcpy(dest2, src10, 20);
    assert(memcmp(dest1, dest2, 20) == 0);

    // 14. Test copying to a smaller buffer than the source
    char src11[] = "This is a test for buffer overflow";
    char dest7[10];
    char dest8[10];
    memcpy(dest7, src11, 10);
    ft_memcpy(dest8, src11, 10);
    assert(memcmp(dest7, dest8, 10) == 0);

    // 15. Test copying a single character
    char src12[] = "a";
    memcpy(dest1, src12, 1);
    ft_memcpy(dest2, src12, 1);
    assert(memcmp(dest1, dest2, 1) == 0);

    // 16. Test copying from the middle of a buffer
    char src13[] = "Copy from middle";
    memcpy(dest1, src13 + 5, 10);
    ft_memcpy(dest2, src13 + 5, 10);
    assert(memcmp(dest1, dest2, 10) == 0);

    // 17. Test copying with different lengths
    memcpy(dest1, src1, 3);
    ft_memcpy(dest2, src1, 3);
    assert(memcmp(dest1, dest2, 3) == 0);

    // 18. Test copying characters including special symbols
    char src14[] = "~`!@#$%^&*()_+";
    memcpy(dest1, src14, 14);
    ft_memcpy(dest2, src14, 14);
    assert(memcmp(dest1, dest2, 14) == 0);

    // 19. Test copying where the source and destination are the same
    // char src15[50] = "Self copy test";
    // memcpy(src15, src15, 50);
    // ft_memcpy(src15, src15, 50);
    // assert(memcmp(src15, src15, 50) == 0);

    // 20. Test copying the last character in a string
    char src16[] = "end";
    memcpy(dest1, src16 + 2, 1);
    ft_memcpy(dest2, src16 + 2, 1);
    assert(memcmp(dest1, dest2, 1) == 0);
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
