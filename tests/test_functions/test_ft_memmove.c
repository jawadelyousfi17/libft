#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

void test_ft_memmove()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "void *ft_memmove(void *dest, const void *src, size_t n)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    // 1. Basic non-overlapping copy
    char dest1[20] = "hello";
    char dest2[20] = "hello";
    char src1[] = "World";
    memmove(dest2, src1, 5);
    ft_memmove(dest1, src1, 5);
    assert(memcmp(dest1, dest2, 5) == 0);

    // 2. Copying with overlap where src is before dest
    char overlap1[] = "Overlap test";
    char overlap2[] = "Overlap test";
    memmove(overlap2 + 3, overlap2, 5);
    ft_memmove(overlap1 + 3, overlap1, 5);
    assert(memcmp(overlap1, overlap2, 12) == 0);

    // 3. Copying with overlap where dest is before src
    char overlap3[] = "Overlap test";
    char overlap4[] = "Overlap test";
    memmove(overlap4, overlap4 + 3, 5);
    ft_memmove(overlap3, overlap3 + 3, 5);
    assert(memcmp(overlap3, overlap4, 12) == 0);

    // 4. Copying a large buffer
    char largeSrc[1000], largeDest1[1000], largeDest2[1000];
    memset(largeSrc, 'A', 1000);
    memmove(largeDest1, largeSrc, 1000);
    ft_memmove(largeDest2, largeSrc, 1000);
    assert(memcmp(largeDest1, largeDest2, 1000) == 0);

    // 5. Copying a buffer of zeros
    char zeroSrc[50] = {0};
    char zeroDest1[50], zeroDest2[50];
    memmove(zeroDest1, zeroSrc, 50);
    ft_memmove(zeroDest2, zeroSrc, 50);
    assert(memcmp(zeroDest1, zeroDest2, 50) == 0);

    // 6. Copying a single character
    char singleCharSrc[] = "A";
    char singleCharDest1[2], singleCharDest2[2];
    memmove(singleCharDest1, singleCharSrc, 1);
    ft_memmove(singleCharDest2, singleCharSrc, 1);
    assert(memcmp(singleCharDest1, singleCharDest2, 1) == 0);

    // 7. Copying with length 0
    char emptySrc[] = "Empty";
    char emptyDest1[10] = "Dest";
    char emptyDest2[10] = "Dest";
    memmove(emptyDest1, emptySrc, 0);
    ft_memmove(emptyDest2, emptySrc, 0);
    assert(memcmp(emptyDest1, emptyDest2, 10) == 0);

    // 8. Copying with overlapping memory (src in the middle of dest)
    char middleOverlap1[] = "Hello, World!";
    char middleOverlap2[] = "Hello, World!";
    memmove(middleOverlap1 + 7, middleOverlap1 + 6, 6);
    ft_memmove(middleOverlap2 + 7, middleOverlap2 + 6, 6);
    assert(memcmp(middleOverlap1, middleOverlap2, 13) == 0);

    // 9. Copying different characters
    char diffSrc[] = "123456789";
    char diffDest1[10], diffDest2[10];
    memmove(diffDest1, diffSrc, 9);
    ft_memmove(diffDest2, diffSrc, 9);
    assert(memcmp(diffDest1, diffDest2, 9) == 0);

    // 10. Copying non-printable characters
    char nonPrintSrc[] = "\x01\x02\x03\x04\x05\x06";
    char nonPrintDest1[6], nonPrintDest2[6];
    memmove(nonPrintDest1, nonPrintSrc, 6);
    ft_memmove(nonPrintDest2, nonPrintSrc, 6);
    assert(memcmp(nonPrintDest1, nonPrintDest2, 6) == 0);

    // 11. Copying into the same buffer
    char sameBuffer1[] = "abcdef";
    char sameBuffer2[] = "abcdef";
    memmove(sameBuffer1, sameBuffer1, 6);
    ft_memmove(sameBuffer2, sameBuffer2, 6);
    assert(memcmp(sameBuffer1, sameBuffer2, 6) == 0);

    // 12. Copying a part of the same buffer with a different size
    char partialBuffer1[] = "Buffer testing";
    char partialBuffer2[] = "Buffer testing";
    memmove(partialBuffer1 + 4, partialBuffer1 + 2, 8);
    ft_memmove(partialBuffer2 + 4, partialBuffer2 + 2, 8);
    assert(memcmp(partialBuffer1, partialBuffer2, 15) == 0);

    // 13. Copying overlapping data with larger buffer
    char largerOverlap1[100] = "Overlap check with large buffer";
    char largerOverlap2[100] = "Overlap check with large buffer";
    memmove(largerOverlap1 + 10, largerOverlap1, 25);
    ft_memmove(largerOverlap2 + 10, largerOverlap2, 25);
    assert(memcmp(largerOverlap1, largerOverlap2, 35) == 0);

    // 14. Copying from a null buffer
    char nullSrc[] = "";
    char nullDest1[1], nullDest2[1];
    memmove(nullDest1, nullSrc, 1);
    ft_memmove(nullDest2, nullSrc, 1);
    assert(memcmp(nullDest1, nullDest2, 1) == 0);

    // 15. Copying using all spaces
    char spaceSrc[] = "          ";
    char spaceDest1[11], spaceDest2[11];
    memmove(spaceDest1, spaceSrc, 10);
    ft_memmove(spaceDest2, spaceSrc, 10);
    assert(memcmp(spaceDest1, spaceDest2, 10) == 0);

    // 16. Copying special characters
    char specialSrc[] = "~!@#$%^&*()";
    char specialDest1[11], specialDest2[11];
    memmove(specialDest1, specialSrc, 10);
    ft_memmove(specialDest2, specialSrc, 10);
    assert(memcmp(specialDest1, specialDest2, 10) == 0);

    // 17. Copying overlapping regions (end to start)
    char overlapEnd1[] = "abcdefghijk";
    char overlapEnd2[] = "abcdefghijk";
    memmove(overlapEnd1, overlapEnd1 + 4, 5);
    ft_memmove(overlapEnd2, overlapEnd2 + 4, 5);
    assert(memcmp(overlapEnd1, overlapEnd2, 11) == 0);

    // 18. Copying overlapping regions (start to end)
    char overlapStart1[] = "abcdefghijk";
    char overlapStart2[] = "abcdefghijk";
    memmove(overlapStart1 + 4, overlapStart1, 5);
    ft_memmove(overlapStart2 + 4, overlapStart2, 5);
    assert(memcmp(overlapStart1, overlapStart2, 11) == 0);

    // 19. Copying a buffer of random data
    char randSrc[50];
    char randDest1[50], randDest2[50];
    for (int i = 0; i < 50; i++)
        randSrc[i] = rand() % 256;
    memmove(randDest1, randSrc, 50);
    ft_memmove(randDest2, randSrc, 50);
    assert(memcmp(randDest1, randDest2, 50) == 0);

    // 20. Copying overlapping regions with a partial overlap
    char partialOverlap1[] = "Partial overlap example";
    char partialOverlap2[] = "Partial overlap example";
    memmove(partialOverlap1 + 8, partialOverlap1, 10);
    ft_memmove(partialOverlap2 + 8, partialOverlap2, 10);
    assert(memcmp(partialOverlap1, partialOverlap2, 20) == 0);
    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}