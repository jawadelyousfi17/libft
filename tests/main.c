#include <stdio.h>
#include <assert.h>
#include "../libft.h"
#include "big_data.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <bsd/string.h>

void loading_effect()
{
    const char *loading_chars = "|/-\\-.";
    int num_chars = 6;

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < num_chars; j++)
        {
            printf("\033[1;36m"
                   "\r%c",
                   loading_chars[j]);
        }
        printf("\033[1;36m"
               "\r");
    }
}
// void test_ft_isalpha()
// {
//     int c = -1;
//     while (c <= 255)
//     {
//         assert(ft_isalpha(c) == isalpha(c));
//         c++;
//     }
//     printf("All tests passed!\n");
// }

// void test_ft_isdigit()
// {
//     int c = -1;
//     while (c <= 255)
//     {
//         assert(ft_isdigit(c) == isdigit(c));
//         c++;
//     }
//     printf("All tests passed!\n");
// }

// void test_ft_isalnum()
// {
//     int c = -1;
//     while (c <= 255)
//     {
//         assert(ft_isalnum(c) == isalnum(c));
//         c++;
//     }
//     printf("All tests passed!\n");
// }

// void test_ft_isascii()
// {
//     int c = -1000;
//     while (c <= 1000)
//     {
//         //printf("C = %d Passed\n",c-1);
//         assert(ft_isascii(c) == isascii(c));
//         c++;
//     }
//     printf("All tests passed!\n");
// }

// void test_ft_isprint()
// {
//     int c = -1;
//     while (c <= 255)
//     {
//         //printf("C = %d Passed\n",c-1);
//         assert(ft_isprint(c) == isprint(c));
//         c++;
//     }
//     printf("All tests passed!\n");
// }

// void test_ft_strlen()
// {
//     assert(strlen("") == ft_strlen(""));
//     assert(strlen("hello") == ft_strlen("hello"));
//     assert(strlen("Hello - coma") == ft_strlen("Hello - coma"));
//     assert(strlen("good bye") == ft_strlen("good bye"));
//     assert(strlen("             ") == ft_strlen("             "));
//     assert(strlen("kk\0comma") == ft_strlen("kk\0comma"));
//     assert(strlen("hello \n in this test \t  ...") == ft_strlen("hello \n in this test \t  ..."));
//     assert(strlen("good to c u 123456") == ft_strlen("good to c u 123456"));
//     assert(strlen("1337 is great scholl so ?::") == ft_strlen("1337 is great scholl so ?::"));
//     assert(strlen("::::::") == ft_strlen("::::::"));
//     assert(strlen("\n\n\n\n\\\0\n\0") == ft_strlen("\n\n\n\n\\\0\n\0"));
//     assert(strlen("\n\n\n\n\\\0\n\t\r\t") == ft_strlen("\n\n\n\n\\\0\n\t\r\t"));

//     printf("All tests passed!\n");
// }

// void test_ft_toupper()
// {
//     int c = -1;
//     while (c <= 255)
//     {
//         //printf("C = %d Passed\n",c-1);
//         assert(ft_toupper(c) == toupper(c));
//         c++;
//     }
//     printf("All tests passed!\n");
// }

// void test_ft_tolower()
// {
//     int c = -1;
//     while (c <= 255)
//     {
//         //printf("C = %d Passed\n",c-1);
//         assert(ft_tolower(c) == tolower(c));
//         c++;
//     }
//     printf("All tests passed!\n");
// }

// void test_ft_strchr()
// {
//         printf("\033[0;36m" "Test : " "\033[1;37m" "ft_strchr(const char *s, int c)" "\033[0m\n"); // Cyan
//         printf("\033[0;36m" "where -1 <= c <= 255 " "\033[0m\n"); // Cyan
//         printf("\033[0;36m" "and 0 <= strlen(s) <= 100" "\033[0m\n"); // Cyan
//     int c = -1;
//     while (c <= 255)
//     {
//         assert(ft_strchr("abcd", c) == strchr("abcd", c));
//         assert(ft_strchr("", c) == strchr("", c));
//         assert(ft_strchr("hrllojpfe57f76fef*+e8f+7f", c) == strchr("hrllojpfe57f76fef*+e8f+7f", c));
//         assert(ft_strchr("jjfe\n\t\04654", c) == strchr("jjfe\n\t\04654", c));
//         assert(ft_strchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c) == strchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c));
//         assert(ft_strchr("0123456789abcdefghijklmnopqrstuvwxyz", c) == strchr("0123456789abcdefghijklmnopqrstuvwxyz", c));
//         assert(ft_strchr("-*-/*\\", c) == strchr("-*-/*\\", c));
//         loading_effect();
//         c++;
//     }
//     printf("\033[1;32m""All tests passed :)\n");
// }

// void test_ft_strrchr()
// {
//     printf("\033[0;36m" "Test : " "\033[0;37m" "ft_strrchr(const char *s, int c)" "\033[0m\n"); // Cyan
//     printf("\033[0;36m" "where -1 <= c <= 255 " "\033[0m\n"); // Cyan
//     printf("\033[0;36m" "and 0 <= strlen(s) <= 100" "\033[0m\n"); // Cyan

//     int c = -1;
//     while (c <= 255)
//     {
//         assert(ft_strrchr("abcd", c) == strrchr("abcd", c));
//         assert(ft_strrchr("", c) == strrchr("", c));
//         assert(ft_strrchr("hrllojpfe57f76fef*+e8f+7f", c) == strrchr("hrllojpfe57f76fef*+e8f+7f", c));
//         assert(ft_strrchr("jjfe\n\t\04654", c) == strrchr("jjfe\n\t\04654", c));
//         assert(ft_strrchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c) == strrchr("ljbf ijiojf kjkj , fklenkfk,ekjf", c));
//         assert(ft_strrchr("0123456789abcdefghijklmnopqrstuvwxyz", c) == strrchr("0123456789abcdefghijklmnopqrstuvwxyz", c));
//         assert(ft_strrchr("-*-/*\\", c) == strrchr("-*-/*\\", c));
//         //printf("  C = %d Passed\n", c);
//         c++;
//     }
//     printf("\033[0;32m"
//            "All tests passed!\n"
//            "\033[0m\n"); // Green
// }

#define MAX_LINE_LENGTH 1024

char *get_line_content(const char *filename, int line_number)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening file");
        return NULL;
    }

    char *line_content = malloc(MAX_LINE_LENGTH);
    if (!line_content)
    {
        perror("Memory allocation error");
        fclose(file);
        return NULL;
    }

    int current_line = 0;
    while (fgets(line_content, MAX_LINE_LENGTH, file))
    {
        current_line++;
        if (current_line == line_number)
        {
            fclose(file);
            return line_content;
        }
    }

    free(line_content);
    fclose(file);
    return NULL; // Line number exceeds file length or file is empty
}

void c_assert_equal(int a, int b, int line, int test_number, int *accepted)
{
    if (a != b)
    {
        *accepted = 0;
        printf("\033[1;31m"
               "Test %d failed: ",
               test_number);
        char *test = get_line_content("tests/main.c", line);
        while (*test != '(')
        {
            test++;
        }
        test++;
        printf("\033[0m"
               "%s",
               test);
    }
    else
    {
        printf("\033[0;32m"
               "Test %d passed"
               "\033[0m\n",
               test_number);
    }
}

// void test_ft_strncmp()
// {
//     int accepted = 1;
//     printf("\033[0;36m"
//            "\nTest : "
//            "\033[1;37m"
//            "int ft_strncmp(const char *s1, const char *s2, size_t n)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= strlen(s1) <= 100"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "and 0 <= strlen(s1) <= 100"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "and 0 <= n <= 10^4"
//            "\033[0m\n"); // Cyan

//     c_assert_equal(ft_strncmp("", "", 0), strncmp("", "", 0), __LINE__, 1, &accepted);
//     c_assert_equal(ft_strncmp("", "", 5), strncmp("", "", 5), __LINE__, 2, &accepted);
//     c_assert_equal(ft_strncmp("abc", "", 3), strncmp("abc", "", 3), __LINE__, 2, &accepted);
//     c_assert_equal(ft_strncmp("", "abc", 3), strncmp("", "abc", 3), __LINE__, 3, &accepted);
//     c_assert_equal(ft_strncmp("hello", "hello", 0), strncmp("hello", "hello", 0), __LINE__, 4, &accepted);
//     c_assert_equal(ft_strncmp("hello", "hello", 5), strncmp("hello", "hello", 5), __LINE__, 5, &accepted);
//     c_assert_equal(ft_strncmp("hello", "hell", 5), strncmp("hello", "hell", 5), __LINE__, 6, &accepted);
//     c_assert_equal(ft_strncmp("hello", "heLlo", 5), strncmp("hello", "heLlo", 5), __LINE__, 7, &accepted);
//     c_assert_equal(ft_strncmp("hello", "xell", 5), strncmp("hello", "xell", 5), __LINE__, 8, &accepted);
//     c_assert_equal(ft_strncmp("hello", "hellooo", 5), strncmp("hello", "hellooo", 5), __LINE__, 9, &accepted);
//     c_assert_equal(ft_strncmp("hello", "hellooo", 4), strncmp("hello", "hellooo", 4), __LINE__, 10, &accepted);
//     c_assert_equal(ft_strncmp("abcdefgh", "abcdefgh", 8), strncmp("abcdefgh", "abcdefgh", 8), __LINE__, 11, &accepted);
//     c_assert_equal(ft_strncmp("abc", "abcdef", 3), strncmp("abc", "abcdef", 3), __LINE__, 12, &accepted);
//     c_assert_equal(ft_strncmp("abcdef", "abc", 3), strncmp("abcdef", "abc", 3), __LINE__, 13, &accepted);
//     c_assert_equal(ft_strncmp("abc", "xyz", 3), strncmp("abc", "xyz", 3), __LINE__, 14, &accepted);
//     c_assert_equal(ft_strncmp("abc", "abcd", 3), strncmp("abc", "abcd", 3), __LINE__, 15, &accepted);
//     c_assert_equal(ft_strncmp("abc", "abc", 10), strncmp("abc", "abc", 10), __LINE__, 16, &accepted);
//     c_assert_equal(ft_strncmp("hello!", "hello@", 6), strncmp("hello!", "hello@", 6), __LINE__, 17, &accepted);
//     c_assert_equal(ft_strncmp("hello", "", 5), strncmp("hello", "", 5), __LINE__, 18, &accepted);
//     c_assert_equal(ft_strncmp("hello 1337", "hello 1337", 4), strncmp("hello 1337", "hello 1337", 4), __LINE__, 19, &accepted);
//     c_assert_equal(ft_strncmp("hello 1337", "hello 337", 8), strncmp("hello 1337", "hello 337", 8), __LINE__, 20, &accepted);
//     c_assert_equal(ft_strncmp("hello 1337 welcome", "hello 4242 welcome", 10), strncmp("hello 1337 welcome", "hello 4242 welcome", 10), __LINE__, 21, &accepted);
//     c_assert_equal(ft_strncmp("1337", "1337", 10), strncmp("1337", "1337", 10), __LINE__, 22, &accepted);
//     c_assert_equal(ft_strncmp("1337", "1337", 10000), strncmp("1337", "1337", 10000), __LINE__, 23, &accepted);
//     c_assert_equal(ft_strncmp("case", "Case", 4), strncmp("case", "Case", 4), __LINE__, 24, &accepted);
//     c_assert_equal(ft_strncmp("Max_length", "Max_length", 10), strncmp("Max_length", "Max_lengmp", 10), __LINE__, 25, &accepted);

//     if (accepted)
//         printf("\033[1;32m"
//                "All tests passed!\n"
//                "\033[0m\n"); // Green
// }

// void test_ft_strlcpy()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            "size_t ft_strlcpy(char *dst, const char *src, size_t size)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= size "
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "and 0 <= strlen(src) <= 100"
//            "\033[0m\n"); // Cyan

//     // init
//     char dst[100] = "Hello 1337 Im the destination string";
//     char src[] = "And I am the source!";

//     assert(ft_strlcpy(dst, src, 0) == strlen(src) && strcmp("Hello 1337 Im the destination string", dst) == 0);
//     char dst1[100] = "Hello 1337 Im the destination string";
//     char src1[] = "And I am the source!";
//     assert(ft_strlcpy(dst1, src1, 0) == strlen(src1) && strcmp("Hello 1337 Im the destination string", dst1) == 0);

//     char dst2[100] = "Original Destination";
//     char src2[] = "Short";
//     assert(ft_strlcpy(dst2, src2, 6) == strlen(src2) && strcmp("Short", dst2) == 0);

//     char dst3[50] = "Destination with more content";
//     char src3[] = "Source content";
//     assert(ft_strlcpy(dst3, src3, 5) == strlen(src3) && strcmp("Sour", dst3) == 0);

//     char dst4[100] = "Another destination string";
//     char src4[] = "Empty";
//     assert(ft_strlcpy(dst4, src4, 1) == strlen(src4) && strcmp("", dst4) == 0);

//     char dst5[100] = "Full";
//     char src5[] = "Longer source string";
//     assert(ft_strlcpy(dst5, src5, 100) == strlen(src5) && strcmp("Longer source string", dst5) == 0);

//     char dst6[10] = "";
//     char src6[] = "";
//     assert(ft_strlcpy(dst6, src6, 10) == strlen(src6) && strcmp("", dst6) == 0);

//     char dst7[10] = "Short";
//     char src7[] = "";
//     assert(ft_strlcpy(dst7, src7, 10) == strlen(src7) && strcmp("", dst7) == 0);

//     char dst8[50] = "Test for sufficient size";
//     char src8[] = "123456789";
//     assert(ft_strlcpy(dst8, src8, 10) == strlen(src8) && strcmp("123456789", dst8) == 0);

//     char dst9[20] = "Destination";
//     char src9[] = "Source";
//     assert(ft_strlcpy(dst9, src9, 0) == strlen(src9) && strcmp("Destination", dst9) == 0);

//     char dst10[20] = "ABCDEF";
//     char src10[] = "XYZ";
//     assert(ft_strlcpy(dst10, src10, 4) == strlen(src10) && strcmp("XYZ", dst10) == 0);

//     char dst11[30] = "Partial destination";
//     char src11[] = "Exact size fit";
//     assert(ft_strlcpy(dst11, src11, 15) == strlen(src11) && strcmp("Exact size fit", dst11) == 0);

//     char dst12[1] = "";
//     char src12[] = "Non-empty source";
//     assert(ft_strlcpy(dst12, src12, 1) == strlen(src12) && strcmp("", dst12) == 0);

//     char dst13[100] = "Just testing";
//     char src13[] = "New source string";
//     assert(ft_strlcpy(dst13, src13, 50) == strlen(src13) && strcmp("New source string", dst13) == 0);

//     char dst14[50] = "Destination";
//     char src14[] = "Another source";
//     assert(ft_strlcpy(dst14, src14, 2) == strlen(src14) && strcmp("A", dst14) == 0);

//     char dst15[50] = "";
//     char src15[] = "";
//     assert(ft_strlcpy(dst15, src15, 0) == strlen(src15) && strcmp("", dst15) == 0);

//     char dst16[10] = "Hello";
//     char src16[] = "World!";
//     assert(ft_strlcpy(dst16, src16, 6) == strlen(src16) && strcmp("World", dst16) == 0);

//     char dst17[5] = "1234";
//     char src17[] = "56789";
//     assert(ft_strlcpy(dst17, src17, 5) == strlen(src17) && strcmp("5678", dst17) == 0);

//     char dst18[5] = "";
//     char src18[] = "abcd";
//     assert(ft_strlcpy(dst18, src18, 5) == strlen(src18) && strcmp("abcd", dst18) == 0);

//     char dst19[3] = "AA";
//     char src19[] = "B";
//     assert(ft_strlcpy(dst19, src19, 3) == strlen(src19) && strcmp("B", dst19) == 0);

//     char dst20[20] = "Begin";
//     char src20[] = "";
//     assert(ft_strlcpy(dst20, src20, 20) == strlen(src20) && strcmp("", dst20) == 0);

//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n"); // Green
// }

// void test_ft_strlcat()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            "size_t ft_strlcat(char *dst, const char *src, size_t size)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= size "
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "and 0 <= strlen(dst) <= 100"
//            "\033[0m\n"); // Cyan
//             printf("\033[0;36m"
//            "and 0 <= strlen(src) <= 100"
//            "\033[0m\n"); // Cyan

//     // init
//     char dst[100] = "Hello 1337 Im the destination string";
//     char f_dst[100] = "Hello 1337 Im the destination string";
//     char src[] = "And I am the source!";
//     assert(ft_strlcat(f_dst, src, 10) == strlcat(dst, src, 10));
//     assert(strcmp(dst, f_dst) == 0);
//     assert(strlen(f_dst) == strlen(dst));

//     // Test Case 1: Basic concatenation with limit
//     char dst1[100] = "Hello";
//     char f_dst1[100] = "Hello";
//     char src1[] = " World!";
//     assert(ft_strlcat(f_dst1, src1, 100) == strlcat(dst1, src1, 100));
//     assert(strcmp(dst1, f_dst1) == 0);
//     assert(strlen(f_dst1) == strlen(dst1));

//     // Test Case 2: Zero size limit
//     char dst2[100] = "Hello";
//     char f_dst2[100] = "Hello";
//     char src2[] = " World!";
//     assert(ft_strlcat(f_dst2, src2, 0) == strlcat(dst2, src2, 0));
//     assert(strcmp(dst2, f_dst2) == 0);

//     // Test Case 3: Exact size limit equal to destination length
//     char dst3[100] = "Hello";
//     char f_dst3[100] = "Hello";
//     char src3[] = " World!";
//     assert(ft_strlcat(f_dst3, src3, 5) == strlcat(dst3, src3, 5));
//     assert(strcmp(dst3, f_dst3) == 0);

//     // Test Case 4: Size limit larger than combined length
//     char dst4[100] = "12345";
//     char f_dst4[100] = "12345";
//     char src4[] = "67890";
//     assert(ft_strlcat(f_dst4, src4, 20) == strlcat(dst4, src4, 20));
//     assert(strcmp(dst4, f_dst4) == 0);

//     // Test Case 5: Concatenating an empty source string
//     char dst5[100] = "Destination";
//     char f_dst5[100] = "Destination";
//     char src5[] = "";
//     assert(ft_strlcat(f_dst5, src5, 50) == strlcat(dst5, src5, 50));
//     assert(strcmp(dst5, f_dst5) == 0);

//     // Test Case 6: Concatenating to an empty destination string
//     char dst6[100] = "";
//     char f_dst6[100] = "";
//     char src6[] = "Source only";
//     assert(ft_strlcat(f_dst6, src6, 50) == strlcat(dst6, src6, 50));
//     assert(strcmp(dst6, f_dst6) == 0);

//     // Test Case 7: Concatenating with a size limit that just fits
//     char dst7[100] = "1234";
//     char f_dst7[100] = "1234";
//     char src7[] = "5678";
//     assert(ft_strlcat(f_dst7, src7, 9) == strlcat(dst7, src7, 9));
//     assert(strcmp(dst7, f_dst7) == 0);

//     // Test Case 8: Large size limit with large destination and source
//     char dst8[500] = "Large buffer";
//     char f_dst8[500] = "Large buffer";
//     char src8[] = " appended to a large buffer.";
//     assert(ft_strlcat(f_dst8, src8, 500) == strlcat(dst8, src8, 500));
//     assert(strcmp(dst8, f_dst8) == 0);

//     // Test Case 9: Size limit smaller than destination length
//     char dst9[100] = "Overflow";
//     char f_dst9[100] = "Overflow";
//     char src9[] = " will not fit";
//     assert(ft_strlcat(f_dst9, src9, 5) == strlcat(dst9, src9, 5));
//     assert(strcmp(dst9, f_dst9) == 0);

//     // Test Case 10: Size limit of 1
//     char dst10[100] = "Limited";
//     char f_dst10[100] = "Limited";
//     char src10[] = "Size";
//     assert(ft_strlcat(f_dst10, src10, 1) == strlcat(dst10, src10, 1));
//     assert(strcmp(dst10, f_dst10) == 0);

//     // Test Case 11: Source larger than destination
//     char dst11[100] = "Fit";
//     char f_dst11[100] = "Fit";
//     char src11[] = "This is a much larger string.";
//     assert(ft_strlcat(f_dst11, src11, 10) == strlcat(dst11, src11, 10));
//     assert(strcmp(dst11, f_dst11) == 0);

//     // Test Case 12: Source exactly fits into the remaining size
//     char dst12[100] = "End";
//     char f_dst12[100] = "End";
//     char src12[] = "Finish";
//     assert(ft_strlcat(f_dst12, src12, 10) == strlcat(dst12, src12, 10));
//     assert(strcmp(dst12, f_dst12) == 0);

//     // Test Case 13: Concatenate a string with itself
//     char dst13[100] = "Self";
//     char f_dst13[100] = "Self";
//     assert(ft_strlcat(f_dst13, f_dst13, 8) == strlcat(dst13, dst13, 8));
//     assert(strcmp(dst13, f_dst13) == 0);

//     // Test Case 14: Concatenating a small string to a very large string
//     char dst14[500] = "A";
//     char f_dst14[500] = "A";
//     char src14[] = " small addition to a large string";
//     assert(ft_strlcat(f_dst14, src14, 500) == strlcat(dst14, src14, 500));
//     assert(strcmp(dst14, f_dst14) == 0);

//     // Test Case 15: Concatenating with size limit equal to zero length source
//     char dst15[100] = "Final";
//     char f_dst15[100] = "Final";
//     char src15[] = "";
//     assert(ft_strlcat(f_dst15, src15, 10) == strlcat(dst15, src15, 10));
//     assert(strcmp(dst15, f_dst15) == 0);

//     // Test Case 16: Concatenate with insufficient space for null terminator
//     char dst16[100] = "NullTerminator";
//     char f_dst16[100] = "NullTerminator";
//     char src16[] = "Check";
//     assert(ft_strlcat(f_dst16, src16, 15) == strlcat(dst16, src16, 15));
//     assert(strcmp(dst16, f_dst16) == 0);

//     // Test Case 17: Empty destination and empty source
//     char dst17[100] = "";
//     char f_dst17[100] = "";
//     char src17[] = "";
//     assert(ft_strlcat(f_dst17, src17, 100) == strlcat(dst17, src17, 100));
//     assert(strcmp(dst17, f_dst17) == 0);

//     // Test Case 18: Concatenating non-overlapping strings
//     char dst18[100] = "Left";
//     char f_dst18[100] = "Left";
//     char src18[] = "Right";
//     assert(ft_strlcat(f_dst18, src18, 10) == strlcat(dst18, src18, 10));
//     assert(strcmp(dst18, f_dst18) == 0);

//     // Test Case 19: Size limit greater than source length but less than destination length
//     char dst19[100] = "Medium";
//     char f_dst19[100] = "Medium";
//     char src19[] = "Size";
//     assert(ft_strlcat(f_dst19, src19, 8) == strlcat(dst19, src19, 8));
//     assert(strcmp(dst19, f_dst19) == 0);

//      char dst20[100] = "1337";
//     char f_dst20[100] = "1337";
//     assert(ft_strlcat(f_dst20, f_dst20, 8) == strlcat(dst20, dst20, 8));
//     assert(strcmp(f_dst20, dst20) == 0);
//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n"); // Green
// }

// void test_ft_strnstr()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            "char *ft_strnstr(const char *big, const char *little, size_t len)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= size "
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "and 0 <= strlen(big) <= 10^4"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "and 0 <= strlen(little) <= 10^4"
//            "\033[0m\n"); // Cyan
//     // init
//     assert(strnstr("Hello", "Hel", 5) == ft_strnstr("Hello", "Hel", 5));
//     assert(strnstr("1337 is great", "is bad", 12) == strnstr("1337 is great", "is bad", 12));
//     assert(strnstr("abcdef", "cd", 6) == ft_strnstr("abcdef", "cd", 6));
//     assert(strnstr("abcdef", "gh", 6) == ft_strnstr("abcdef", "gh", 6));
//     assert(strnstr("abcdef", "a", 1) == ft_strnstr("abcdef", "a", 1));
//     assert(strnstr("abcdef", "f", 6) == ft_strnstr("abcdef", "f", 6));
//     assert(strnstr("abcdef", "", 6) == ft_strnstr("abcdef", "", 6));
//     assert(strnstr("abcdef", "abcdef", 6) == ft_strnstr("abcdef", "abcdef", 6));
//     assert(strnstr("abcdef", "abcdefg", 7) == ft_strnstr("abcdef", "abcdefg", 7));
//     assert(strnstr("abcdef", "e", 4) == ft_strnstr("abcdef", "e", 4));
//     assert(strnstr("abcdef", "e", 5) == ft_strnstr("abcdef", "e", 5));
//     assert(strnstr("abcdefabcdef", "abcdef", 12) == ft_strnstr("abcdefabcdef", "abcdef", 12));
//     assert(strnstr("abcdefabcdef", "abcdef", 6) == ft_strnstr("abcdefabcdef", "abcdef", 6));
//     assert(strnstr("abcdefabcdef", "def", 9) == ft_strnstr("abcdefabcdef", "def", 9));
//     assert(strnstr("Hello World", "World", 11) == ft_strnstr("Hello World", "World", 11));
//     assert(strnstr("Hello World", "Hello", 5) == ft_strnstr("Hello World", "Hello", 5));
//     assert(strnstr("Hello World", "lo Wo", 10) == ft_strnstr("Hello World", "lo Wo", 10));
//     assert(strnstr("Hello World", "world", 11) == ft_strnstr("Hello World", "world", 11));
//     assert(strnstr("abcdabcd", "bc", 7) == ft_strnstr("abcdabcd", "bc", 7));
//     assert(strnstr("abcdabcd", "bcd", 4) == ft_strnstr("abcdabcd", "bcd", 4));
//     assert(strnstr("123456789", "456", 9) == ft_strnstr("123456789", "456", 9));
//     assert(strnstr("123456789", "789", 8) == ft_strnstr("123456789", "789", 8));
//     assert(strnstr("123456789", "123", 3) == ft_strnstr("123456789", "123", 3));
//     assert(strnstr("Mississippi", "issi", 5) == ft_strnstr("Mississippi", "issi", 5));
//     assert(strnstr("Mississippi", "issi", 6) == ft_strnstr("Mississippi", "issi", 6));
//     assert(strnstr("abcdefgh", "efg", 8) == ft_strnstr("abcdefgh", "efg", 8));
//     assert(strnstr("abcdefgh", "efg", 6) == ft_strnstr("abcdefgh", "efg", 6));
//     assert(strnstr("do doodo?", "do", 8) == ft_strnstr("do doodo?", "do", 8));
//     assert(strnstr("maririmria?", "rim",11) == ft_strnstr("maririmria?", "rim",11));
//     assert(strnstr(big1, small1,1000) == ft_strnstr(big1,small1,1000));
//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n"); // Green
// }

// void test_ft_atoi()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            " int ft_atoi(const char *nptr)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= strlen(nptr) <= 1000 "
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "and 0 <= *nptr < 128"
//            "\033[0m\n"); // Cyan

//     // init
//     assert(atoi("") == ft_atoi(""));
//     assert(atoi("\t\r\v") == ft_atoi("\t\r\v"));
//     assert(atoi("-") == ft_atoi("-"));
//     assert(atoi("+") == ft_atoi("+"));
//     assert(atoi("  012345") == ft_atoi("  012345"));
//     assert(atoi("\t012345") == ft_atoi("\t012345"));
//     assert(atoi("\r012345") == ft_atoi("\r012345"));
//     assert(atoi("\v012345") == ft_atoi("\v012345"));
//     assert(atoi("\n012345") == ft_atoi("\n012345"));
//     assert(atoi("\f012345") == ft_atoi("\f012345"));
//     assert(atoi("\t-012345") == ft_atoi("\t-012345"));
//     assert(atoi("\t+012345") == ft_atoi("\t+012345"));
//     assert(atoi("\t012345") == ft_atoi("\t012345"));
//     assert(atoi("+-012345") == ft_atoi("+-012345"));
//     assert(atoi("+-+-012345") == ft_atoi("+-+-012345"));
//     assert(atoi("012a345") == ft_atoi("012a345"));
//     assert(atoi(" 012\t345") == ft_atoi(" 012\t345"));
//     assert(atoi("2147483647") == ft_atoi("2147483647"));
//     assert(atoi("-2147483648") == ft_atoi("2147483648"));
//     assert(atoi("01234567890123456789") == ft_atoi("01234567890123456789"));
//     assert(atoi("- 89") == ft_atoi("- 89"));
//     assert(atoi("\t\v\n + 1337") == ft_atoi("\t\v\n + 1337"));

//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n"); // Green
// }

// void test_ft_memset()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            "void *ft_memset(void *s, int c, size_t n)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= n "
//            "\033[0m\n"); // Cyan

//     // init
//     void *s1, *s2;

//     // Test Case 1: Set all bytes to 'A' in a buffer of size 10
//     s1 = malloc(10);
//     s2 = malloc(10);
//     assert(strcmp((char *)ft_memset(s1, 65, 9), (char *)memset(s2, 65, 9)) == 0);

//     // Test Case 2: Set all bytes to zero in a buffer of size 10
//     s1 = malloc(10);
//     s2 = malloc(10);
//     assert(memcmp(ft_memset(s1, 0, 10), memset(s2, 0, 10), 10) == 0);

//     // Test Case 3: Fill buffer of size 1 with 'X'
//     s1 = malloc(1);
//     s2 = malloc(1);
//     assert(memcmp(ft_memset(s1, 'X', 1), memset(s2, 'X', 1), 1) == 0);

//     // Test Case 4: Fill buffer of size 0 (no change)
//     s1 = malloc(1);
//     s2 = malloc(1);
//     assert(memcmp(ft_memset(s1, 255, 0), memset(s2, 255, 0), 1) == 0);

//     // Test Case 5: Fill with different values (all 255)
//     s1 = malloc(5);
//     s2 = malloc(5);
//     assert(memcmp(ft_memset(s1, 255, 5), memset(s2, 255, 5), 5) == 0);

//     // Test Case 6: Fill only the first half of the buffer
//     s1 = malloc(10);
//     s2 = malloc(10);
//     assert(memcmp(ft_memset(s1, 'B', 5), memset(s2, 'B', 5), 10) == 0);

//     // Test Case 7: Fill with non-ASCII value (128)
//     s1 = malloc(10);
//     s2 = malloc(10);
//     assert(memcmp(ft_memset(s1, 128, 10), memset(s2, 128, 10), 10) == 0);

//     // Test Case 8: Fill large buffer with zero
//     s1 = malloc(1000);
//     s2 = malloc(1000);
//     assert(memcmp(ft_memset(s1, 0, 1000), memset(s2, 0, 1000), 1000) == 0);

//     // Test Case 9: Fill with spaces (' ')
//     s1 = malloc(20);
//     s2 = malloc(20);
//     assert(memcmp(ft_memset(s1, ' ', 20), memset(s2, ' ', 20), 20) == 0);

//     // Test Case 10: Fill with negative value (-1)
//     s1 = malloc(15);
//     s2 = malloc(15);
//     assert(memcmp(ft_memset(s1, -1, 15), memset(s2, -1, 15), 15) == 0);

//     // Test Case 11: Fill with 0x7F (127, max ASCII value)
//     s1 = malloc(50);
//     s2 = malloc(50);
//     assert(memcmp(ft_memset(s1, 0x7F, 50), memset(s2, 0x7F, 50), 50) == 0);

//     // Test Case 12: Fill entire buffer with a value, part of which was already set
//     s1 = malloc(10);
//     s2 = malloc(10);
//     memset(s1, 'A', 5);
//     memset(s2, 'A', 5);
//     assert(memcmp(ft_memset(s1, 'B', 10), memset(s2, 'B', 10), 10) == 0);

//     // Test Case 13: Fill buffer of a single element with zero
//     s1 = malloc(1);
//     s2 = malloc(1);
//     assert(memcmp(ft_memset(s1, 0, 1), memset(s2, 0, 1), 1) == 0);

//     // Test Case 14: Fill with boundary value (0xFF)
//     s1 = malloc(64);
//     s2 = malloc(64);
//     assert(memcmp(ft_memset(s1, 0xFF, 64), memset(s2, 0xFF, 64), 64) == 0);

//     // Test Case 15: Fill buffer with alternate value (0xAA)
//     s1 = malloc(256);
//     s2 = malloc(256);
//     assert(memcmp(ft_memset(s1, 0xAA, 256), memset(s2, 0xAA, 256), 256) == 0);

//     // Test Case 16: Fill large buffer with max unsigned value (255)
//     s1 = malloc(2048);
//     s2 = malloc(2048);
//     assert(memcmp(ft_memset(s1, 255, 2048), memset(s2, 255, 2048), 2048) == 0);

//     // Test Case 17: Fill buffer of uneven size with zero
//     s1 = malloc(17);
//     s2 = malloc(17);
//     assert(memcmp(ft_memset(s1, 0, 17), memset(s2, 0, 17), 17) == 0);

//     // Test Case 18: Fill very small buffer (1 byte)
//     s1 = malloc(1);
//     s2 = malloc(1);
//     assert(memcmp(ft_memset(s1, '!', 1), memset(s2, '!', 1), 1) == 0);

//     // Test Case 19: Fill with alternating bits (0x55)
//     s1 = malloc(100);
//     s2 = malloc(100);
//     assert(memcmp(ft_memset(s1, 0x55, 100), memset(s2, 0x55, 100), 100) == 0);

//     // Test Case 20: Check if `memset` affects beyond allocated memory
//     s1 = malloc(10);
//     s2 = malloc(10);
//     memset(s1, 'A', 10);
//     memset(s2, 'A', 10);
//     assert(memcmp(ft_memset(s1, 'B', 5), memset(s2, 'B', 5), 10) == 0);

//     free(s1);
//     free(s2);

//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n");
// }

// void test_ft_memcmp()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            "int ft_memcmp(const void *s1, const void *s2, size_t n)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= n "
//            "\033[0m\n"); // Cyan

//     // init
//     void *s1, *s2;

//     // Test Case 1: Set all bytes to 'A' in a buffer of size 10
//     s1 = (char *)"1337";
//     s2 = (char *)"1337";
//     assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 4));
//     assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
//     assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
//     assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
//     assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
//     s1 = (char *)"1337";
//     s2 = (char *)"1338";
//     assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 4));
//     assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
//     assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
//     assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
//     assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
//     s1 = (char *)"1331";
//     s2 = (char *)"3113";
//     assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 4));
//     assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
//     assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
//     assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
//     assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
//     s1 = (char *)"";
//     s2 = (char *)"";
//     assert(memcmp(s1, s2, 4) == ft_memcmp(s1, s2, 4));
//     assert(memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3));
//     assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
//     assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
//     assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
//     s1 = (char *)"aaBBccDDee";
//     s2 = (char *)"aaBBccDDef";
//     assert(memcmp(s1, s2, 10) == ft_memcmp(s1, s2, 10));
//     assert(memcmp(s1, s2, 5) == ft_memcmp(s1, s2, 5));
//     assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
//     assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
//     assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
//     s1 = (char *)"Hello\t1337";
//     s2 = (char *)"Hello\t1337";
//     assert(memcmp(s1, s2, 10) == ft_memcmp(s1, s2, 10));
//     assert(memcmp(s1, s2, 9) == ft_memcmp(s1, s2, 9));
//     assert(memcmp(s1, s2, 8) == ft_memcmp(s1, s2, 8));
//     assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
//     assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
//     s1 = (char *)"Hello\n\0\rworld";
//     s2 = (char *)"Hello\n\0\rworld";
//     assert(memcmp(s1, s2, 13) == ft_memcmp(s1, s2, 13));
//     assert(memcmp(s1, s2, 10) == ft_memcmp(s1, s2, 10));
//     assert(memcmp(s1, s2, 2) == ft_memcmp(s1, s2, 2));
//     assert(memcmp(s1, s2, 1) == ft_memcmp(s1, s2, 1));
//     assert(memcmp(s1, s2, 0) == ft_memcmp(s1, s2, 0));
//     void *s3 = malloc(100);
//     void *s4 = malloc(100);
//     assert(memcmp(s3, s4, 13) == ft_memcmp(s3, s4, 13));
//     assert(memcmp(s3, s4, 10) == ft_memcmp(s3, s4, 10));
//     assert(memcmp(s3, s4, 2) == ft_memcmp(s3, s4, 2));
//     assert(memcmp(s3, s4, 1) == ft_memcmp(s3, s4, 1));
//     assert(memcmp(s3, s4, 0) == ft_memcmp(s3, s4, 0));
//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n");
// }

// void test_ft_memcpy()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            "int ft_memcmp(const void *s1, const void *s2, size_t n)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= n "
//            "\033[0m\n"); // Cyan

//     // init
//     void *s1, *s2;

//     char src1[] = "hello";
//     char dest1[20];
//     char dest2[20];
//     memcpy(dest1, src1, 5);
//     ft_memcpy(dest2, src1, 5);
//     assert(memcmp(dest1, dest2, 5) == 0);

//     // 1. Test copying an empty string
//     char src2[] = "";
//     memcpy(dest1, src2, 1);
//     ft_memcpy(dest2, src2, 1);
//     assert(memcmp(dest1, dest2, 1) == 0);

//     // 2. Test copying a string with length 0
//     memcpy(dest1, src1, 0);
//     ft_memcpy(dest2, src1, 0);
//     assert(memcmp(dest1, dest2, 0) == 0);

//     // 3. Test copying a string with null character in the middle
//     char src3[] = "test\0ing";
//     memcpy(dest1, src3, 8);
//     ft_memcpy(dest2, src3, 8);
//     assert(memcmp(dest1, dest2, 8) == 0);

//     // 4. Test copying a string to the start of another
//     char src4[] = "1234567890";
//     memcpy(dest1, src4, 10);
//     ft_memcpy(dest2, src4, 10);
//     assert(memcmp(dest1, dest2, 10) == 0);

//     // 5. Test copying overlapping memory regions (src before dest)
//     memcpy(dest1, dest1 + 2, 5);
//     ft_memcpy(dest2, dest2 + 2, 5);
//     assert(memcmp(dest1, dest2, 5) == 0);

//     // 6. Test copying overlapping memory regions (src after dest)
//     // memcpy(dest1 + 2, dest1, 5);
//     // ft_memcpy(dest2 + 2, dest2, 5);
//     // assert(memcmp(dest1, dest2, 7) == 0);

//     // 7. Test copying a large buffer
//     char src5[1000], dest3[1000], dest4[1000];
//     memset(src5, 'A', 1000);
//     memcpy(dest3, src5, 1000);
//     ft_memcpy(dest4, src5, 1000);
//     assert(memcmp(dest3, dest4, 1000) == 0);

//     // 8. Test copying with different characters
//     char src6[] = "abcdABCD1234!@#$";
//     memcpy(dest1, src6, 16);
//     ft_memcpy(dest2, src6, 16);
//     assert(memcmp(dest1, dest2, 16) == 0);

//     // 9. Test copying with spaces
//     char src7[] = "   spaces   ";
//     memcpy(dest1, src7, 12);
//     ft_memcpy(dest2, src7, 12);
//     assert(memcmp(dest1, dest2, 12) == 0);

//     // 10. Test copying non-printable characters
//     char src8[] = "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A";
//     memcpy(dest1, src8, 10);
//     ft_memcpy(dest2, src8, 10);
//     assert(memcmp(dest1, dest2, 10) == 0);

//     // 11. Test copying from an uninitialized source
//     char src9[20];
//     memcpy(dest1, src9, 20);
//     ft_memcpy(dest2, src9, 20);
//     assert(memcmp(dest1, dest2, 20) == 0);

//     // 12. Test copying to an uninitialized destination
//     char dest5[20], dest6[20];
//     memcpy(dest5, src1, 5);
//     ft_memcpy(dest6, src1, 5);
//     assert(memcmp(dest5, dest6, 5) == 0);

//     // 13. Test copying a large number of zeros
//     char src10[100] = {0};
//     memcpy(dest1, src10, 100);
//     ft_memcpy(dest2, src10, 100);
//     assert(memcmp(dest1, dest2, 100) == 0);

//     // 14. Test copying to a smaller buffer than the source
//     char src11[] = "This is a test for buffer overflow";
//     char dest7[10];
//     char dest8[10];
//     memcpy(dest7, src11, 10);
//     ft_memcpy(dest8, src11, 10);
//     assert(memcmp(dest7, dest8, 10) == 0);

//     // 15. Test copying a single character
//     char src12[] = "a";
//     memcpy(dest1, src12, 1);
//     ft_memcpy(dest2, src12, 1);
//     assert(memcmp(dest1, dest2, 1) == 0);

//     // 16. Test copying from the middle of a buffer
//     char src13[] = "Copy from middle";
//     memcpy(dest1, src13 + 5, 10);
//     ft_memcpy(dest2, src13 + 5, 10);
//     assert(memcmp(dest1, dest2, 10) == 0);

//     // 17. Test copying with different lengths
//     memcpy(dest1, src1, 3);
//     ft_memcpy(dest2, src1, 3);
//     assert(memcmp(dest1, dest2, 3) == 0);

//     // 18. Test copying characters including special symbols
//     char src14[] = "~`!@#$%^&*()_+";
//     memcpy(dest1, src14, 14);
//     ft_memcpy(dest2, src14, 14);
//     assert(memcmp(dest1, dest2, 14) == 0);

//     // 19. Test copying where the source and destination are the same
//     char src15[50] = "Self copy test";
//     memcpy(src15, src15, 50);
//     ft_memcpy(src15, src15, 50);
//     assert(memcmp(src15, src15, 50) == 0);

//     // 20. Test copying the last character in a string
//     char src16[] = "end";
//     memcpy(dest1, src16 + 2, 1);
//     ft_memcpy(dest2, src16 + 2, 1);
//     assert(memcmp(dest1, dest2, 1) == 0);
//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n");
// }


// void test_ft_memmove()
// {
//     printf("\033[0;36m"
//            "Test : "
//            "\033[1;37m"
//            "void *ft_memmove(void *dest, const void *src, size_t n)"
//            "\033[0m\n"); // Cyan
//     printf("\033[0;36m"
//            "where 0 <= n "
//            "\033[0m\n"); // Cyan

//     // init
//      // 1. Basic non-overlapping copy
//     char dest1[20] = "hello";
//     char dest2[20] = "hello";
//     char src1[] = "World";
//     memmove(dest2, src1, 5);
//     ft_memmove(dest1, src1, 5);
//     assert(memcmp(dest1, dest2, 5) == 0);

//     // 2. Copying with overlap where src is before dest
//     char overlap1[] = "Overlap test";
//     char overlap2[] = "Overlap test";
//     memmove(overlap2 + 3, overlap2, 5);
//     ft_memmove(overlap1 + 3, overlap1, 5);
//     assert(memcmp(overlap1, overlap2, 12) == 0);

//     // 3. Copying with overlap where dest is before src
//     char overlap3[] = "Overlap test";
//     char overlap4[] = "Overlap test";
//     memmove(overlap4, overlap4 + 3, 5);
//     ft_memmove(overlap3, overlap3 + 3, 5);
//     assert(memcmp(overlap3, overlap4, 12) == 0);

//     // 4. Copying a large buffer
//     char largeSrc[1000], largeDest1[1000], largeDest2[1000];
//     memset(largeSrc, 'A', 1000);
//     memmove(largeDest1, largeSrc, 1000);
//     ft_memmove(largeDest2, largeSrc, 1000);
//     assert(memcmp(largeDest1, largeDest2, 1000) == 0);

//     // 5. Copying a buffer of zeros
//     char zeroSrc[50] = {0};
//     char zeroDest1[50], zeroDest2[50];
//     memmove(zeroDest1, zeroSrc, 50);
//     ft_memmove(zeroDest2, zeroSrc, 50);
//     assert(memcmp(zeroDest1, zeroDest2, 50) == 0);

//     // 6. Copying a single character
//     char singleCharSrc[] = "A";
//     char singleCharDest1[2], singleCharDest2[2];
//     memmove(singleCharDest1, singleCharSrc, 1);
//     ft_memmove(singleCharDest2, singleCharSrc, 1);
//     assert(memcmp(singleCharDest1, singleCharDest2, 1) == 0);

//     // 7. Copying with length 0
//     char emptySrc[] = "Empty";
//     char emptyDest1[10] = "Dest";
//     char emptyDest2[10] = "Dest";
//     memmove(emptyDest1, emptySrc, 0);
//     ft_memmove(emptyDest2, emptySrc, 0);
//     assert(memcmp(emptyDest1, emptyDest2, 10) == 0);

//     // 8. Copying with overlapping memory (src in the middle of dest)
//     char middleOverlap1[] = "Hello, World!";
//     char middleOverlap2[] = "Hello, World!";
//     memmove(middleOverlap1 + 7, middleOverlap1 + 6, 6);
//     ft_memmove(middleOverlap2 + 7, middleOverlap2 + 6, 6);
//     assert(memcmp(middleOverlap1, middleOverlap2, 13) == 0);

//     // 9. Copying different characters
//     char diffSrc[] = "123456789";
//     char diffDest1[10], diffDest2[10];
//     memmove(diffDest1, diffSrc, 9);
//     ft_memmove(diffDest2, diffSrc, 9);
//     assert(memcmp(diffDest1, diffDest2, 9) == 0);

//     // 10. Copying non-printable characters
//     char nonPrintSrc[] = "\x01\x02\x03\x04\x05\x06";
//     char nonPrintDest1[6], nonPrintDest2[6];
//     memmove(nonPrintDest1, nonPrintSrc, 6);
//     ft_memmove(nonPrintDest2, nonPrintSrc, 6);
//     assert(memcmp(nonPrintDest1, nonPrintDest2, 6) == 0);

//     // 11. Copying into the same buffer
//     char sameBuffer1[] = "abcdef";
//     char sameBuffer2[] = "abcdef";
//     memmove(sameBuffer1, sameBuffer1, 6);
//     ft_memmove(sameBuffer2, sameBuffer2, 6);
//     assert(memcmp(sameBuffer1, sameBuffer2, 6) == 0);

//     // 12. Copying a part of the same buffer with a different size
//     char partialBuffer1[] = "Buffer testing";
//     char partialBuffer2[] = "Buffer testing";
//     memmove(partialBuffer1 + 4, partialBuffer1 + 2, 8);
//     ft_memmove(partialBuffer2 + 4, partialBuffer2 + 2, 8);
//     assert(memcmp(partialBuffer1, partialBuffer2, 15) == 0);

//     // 13. Copying overlapping data with larger buffer
//     char largerOverlap1[100] = "Overlap check with large buffer";
//     char largerOverlap2[100] = "Overlap check with large buffer";
//     memmove(largerOverlap1 + 10, largerOverlap1, 25);
//     ft_memmove(largerOverlap2 + 10, largerOverlap2, 25);
//     assert(memcmp(largerOverlap1, largerOverlap2, 35) == 0);

//     // 14. Copying from a null buffer
//     char nullSrc[] = "";
//     char nullDest1[1], nullDest2[1];
//     memmove(nullDest1, nullSrc, 1);
//     ft_memmove(nullDest2, nullSrc, 1);
//     assert(memcmp(nullDest1, nullDest2, 1) == 0);

//     // 15. Copying using all spaces
//     char spaceSrc[] = "          ";
//     char spaceDest1[11], spaceDest2[11];
//     memmove(spaceDest1, spaceSrc, 10);
//     ft_memmove(spaceDest2, spaceSrc, 10);
//     assert(memcmp(spaceDest1, spaceDest2, 10) == 0);

//     // 16. Copying special characters
//     char specialSrc[] = "~!@#$%^&*()";
//     char specialDest1[11], specialDest2[11];
//     memmove(specialDest1, specialSrc, 10);
//     ft_memmove(specialDest2, specialSrc, 10);
//     assert(memcmp(specialDest1, specialDest2, 10) == 0);

//     // 17. Copying overlapping regions (end to start)
//     char overlapEnd1[] = "abcdefghijk";
//     char overlapEnd2[] = "abcdefghijk";
//     memmove(overlapEnd1, overlapEnd1 + 4, 5);
//     ft_memmove(overlapEnd2, overlapEnd2 + 4, 5);
//     assert(memcmp(overlapEnd1, overlapEnd2, 11) == 0);

//     // 18. Copying overlapping regions (start to end)
//     char overlapStart1[] = "abcdefghijk";
//     char overlapStart2[] = "abcdefghijk";
//     memmove(overlapStart1 + 4, overlapStart1, 5);
//     ft_memmove(overlapStart2 + 4, overlapStart2, 5);
//     assert(memcmp(overlapStart1, overlapStart2, 11) == 0);

//     // 19. Copying a buffer of random data
//     char randSrc[50];
//     char randDest1[50], randDest2[50];
//     for (int i = 0; i < 50; i++) randSrc[i] = rand() % 256;
//     memmove(randDest1, randSrc, 50);
//     ft_memmove(randDest2, randSrc, 50);
//     assert(memcmp(randDest1, randDest2, 50) == 0);

//     // 20. Copying overlapping regions with a partial overlap
//     char partialOverlap1[] = "Partial overlap example";
//     char partialOverlap2[] = "Partial overlap example";
//     memmove(partialOverlap1 + 8, partialOverlap1, 10);
//     ft_memmove(partialOverlap2 + 8, partialOverlap2, 10);
//     assert(memcmp(partialOverlap1, partialOverlap2, 20) == 0);
//     printf("\033[1;32m"
//            "All tests passed!\n"
//            "\033[0m\n");
// }


int main(void)
{
   test_ft_memmove();
     char partialOverlap1[] = "Partial overlap example";
    char partialOverlap2[] = "Partial overlap example";
    memmove(partialOverlap1 + 8, partialOverlap1, 10);
    ft_memmove(partialOverlap2 + 8, partialOverlap2, 10);
    printf("%d\n",memcmp(partialOverlap1,partialOverlap2,24));

    return 0;
}