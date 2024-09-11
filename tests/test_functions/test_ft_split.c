#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

void display_char_array(char **array)
{
    int i = 0;
    while (array[i])
    {
        printf("%s  | ", array[i]);
        i++;
    }
}

void c_free(char **array)
{
    int i = 0;
    while (array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
}

int c__assert(char **arr1, char **arr2)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (arr1[j])
        j++;
    while (arr1[i])
        i++;
    if (i != j)
        return (0);
    i = 0;
    while (arr2[i])
    {
        if (strcmp(arr1[i], arr2[i]) != 0)
            return (0);
        i++;
    }
    return (1);
}

void test_ft_split()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char **ft_split(char const *s, char c)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    char **str1 = ft_split("Hello world", ' ');
char *expected1[3] = {"Hello", "world", 0};
assert(c__assert(str1, expected1));
c_free(str1);

char **str2 = ft_split("Helloworld", ' ');
char *expected2[2] = {"Helloworld", 0};
assert(c__assert(str2, expected2));
c_free(str2);

char **str3 = ft_split("Helloworld", 'l');
char *expected3[4] = {"He", "owor", "d", 0};
assert(c__assert(str3, expected3));
c_free(str3);

char **str4 = ft_split("Helloworld", 'd');
char *expected4[2] = {"Helloworl", 0};
assert(c__assert(str4, expected4));
c_free(str4);

char **str5 = ft_split("Helloworld", 'x');
char *expected5[2] = {"Helloworld", 0};
assert(c__assert(str5, expected5));
c_free(str5);

char **str6 = ft_split("1111111111111111111111111", '1');
char *expected6[1] = {0};
assert(c__assert(str6, expected6));
c_free(str6);

char **str7 = ft_split("1337-is--a-great----school----", '-');
char *expected7[] = {"1337", "is", "a", "great", "school", 0};
assert(c__assert(str7, expected7));
c_free(str7);

char **str8 = ft_split("----1337-is--a-great----school----", '-');
char *expected8[] = {"1337", "is", "a", "great", "school", 0};
assert(c__assert(str8, expected8));
c_free(str8);

char **str9 = ft_split("          ", ' ');
char *expected9[] = {0};
assert(c__assert(str9, expected9));
c_free(str9);

char **str10 = ft_split("How are you? today???   ", '?');
char *expected10[] = {"How are you", " today","   ", 0};
assert(c__assert(str10, expected10));
c_free(str10);

char **str11 = ft_split("13374133741337444441337444", '4');
char *expected11[] = {"1337", "1337", "1337", "1337", 0};
assert(c__assert(str11, expected11));
c_free(str11);

char **str12 = ft_split("\t\tHello\tworld\t", '\t');
char *expected12[] = {"Hello", "world", 0};
assert(c__assert(str12, expected12));
c_free(str12);


char **str13 = ft_split("\t\tHello\tworld\t", '9');
char *expected13[] = {"\t\tHello\tworld\t", 0};
assert(c__assert(str13, expected13));
c_free(str13);


    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
