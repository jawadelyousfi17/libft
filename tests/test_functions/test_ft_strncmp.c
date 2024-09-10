#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "../../libft.h"
#include <stdlib.h>



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
        // printf("\033[0;32m"
        //        "Test %d passed"
        //        "\033[0m\n",
        //        test_number);
    }
}

void test_ft_strncmp()
{
    int accepted = 1;
    printf("\033[0;36m"
           "\nTest : "
           "\033[1;37m"
           "int ft_strncmp(const char *s1, const char *s2, size_t n)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= strlen(s1) <= 100"
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= strlen(s1) <= 100"
    //        "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "and 0 <= n <= 10^4"
    //        "\033[0m\n"); // Cyan

    c_assert_equal(ft_strncmp("", "", 0), strncmp("", "", 0), __LINE__, 1, &accepted);
    c_assert_equal(ft_strncmp("", "", 5), strncmp("", "", 5), __LINE__, 2, &accepted);
    c_assert_equal(ft_strncmp("abc", "", 3), strncmp("abc", "", 3), __LINE__, 2, &accepted);
    c_assert_equal(ft_strncmp("", "abc", 3), strncmp("", "abc", 3), __LINE__, 3, &accepted);
    c_assert_equal(ft_strncmp("hello", "hello", 0), strncmp("hello", "hello", 0), __LINE__, 4, &accepted);
    c_assert_equal(ft_strncmp("hello", "hello", 5), strncmp("hello", "hello", 5), __LINE__, 5, &accepted);
    c_assert_equal(ft_strncmp("hello", "hell", 5), strncmp("hello", "hell", 5), __LINE__, 6, &accepted);
    c_assert_equal(ft_strncmp("hello", "heLlo", 5), strncmp("hello", "heLlo", 5), __LINE__, 7, &accepted);
    c_assert_equal(ft_strncmp("hello", "xell", 5), strncmp("hello", "xell", 5), __LINE__, 8, &accepted);
    c_assert_equal(ft_strncmp("hello", "hellooo", 5), strncmp("hello", "hellooo", 5), __LINE__, 9, &accepted);
    c_assert_equal(ft_strncmp("hello", "hellooo", 4), strncmp("hello", "hellooo", 4), __LINE__, 10, &accepted);
    c_assert_equal(ft_strncmp("abcdefgh", "abcdefgh", 8), strncmp("abcdefgh", "abcdefgh", 8), __LINE__, 11, &accepted);
    c_assert_equal(ft_strncmp("abc", "abcdef", 3), strncmp("abc", "abcdef", 3), __LINE__, 12, &accepted);
    c_assert_equal(ft_strncmp("abcdef", "abc", 3), strncmp("abcdef", "abc", 3), __LINE__, 13, &accepted);
    c_assert_equal(ft_strncmp("abc", "xyz", 3), strncmp("abc", "xyz", 3), __LINE__, 14, &accepted);
    c_assert_equal(ft_strncmp("abc", "abcd", 3), strncmp("abc", "abcd", 3), __LINE__, 15, &accepted);
    c_assert_equal(ft_strncmp("abc", "abc", 10), strncmp("abc", "abc", 10), __LINE__, 16, &accepted);
    c_assert_equal(ft_strncmp("hello!", "hello@", 6), strncmp("hello!", "hello@", 6), __LINE__, 17, &accepted);
    c_assert_equal(ft_strncmp("hello", "", 5), strncmp("hello", "", 5), __LINE__, 18, &accepted);
    c_assert_equal(ft_strncmp("hello 1337", "hello 1337", 4), strncmp("hello 1337", "hello 1337", 4), __LINE__, 19, &accepted);
    c_assert_equal(ft_strncmp("hello 1337", "hello 337", 8), strncmp("hello 1337", "hello 337", 8), __LINE__, 20, &accepted);
    c_assert_equal(ft_strncmp("hello 1337 welcome", "hello 4242 welcome", 10), strncmp("hello 1337 welcome", "hello 4242 welcome", 10), __LINE__, 21, &accepted);
    c_assert_equal(ft_strncmp("1337", "1337", 10), strncmp("1337", "1337", 10), __LINE__, 22, &accepted);
    c_assert_equal(ft_strncmp("1337", "1337", 10000), strncmp("1337", "1337", 10000), __LINE__, 23, &accepted);
    c_assert_equal(ft_strncmp("case", "Case", 4), strncmp("case", "Case", 4), __LINE__, 24, &accepted);
    c_assert_equal(ft_strncmp("Max_length", "Max_length", 10), strncmp("Max_length", "Max_length", 10), __LINE__, 25, &accepted);

    if (accepted)
        printf("\033[1;32m"
               "OK!"
               "\033[0m\n"); // Green
}
