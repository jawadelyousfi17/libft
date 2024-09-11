#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>


void test_ft_strtrim()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_strtrim(char const *s1, char const *set)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    
    // init
    char s1[] = "hello";
    char *r1 = ft_strtrim(s1,"hello");
    assert(strcmp(r1,"") == 0);
    free(r1);

    char s2[] = "xyz1337xyz";
    char *r2 = ft_strtrim(s2, "xyz");
    assert(strcmp(r2, "1337") == 0);
    free(r2);

    // Test case 3
    char s3[] = "---C Programming---";
    char *r3 = ft_strtrim(s3, "-");
    assert(strcmp(r3, "C Programming") == 0);
    free(r3);

    // Test case 4
    char s4[] = "///Hello World\\";
    char *r4 = ft_strtrim(s4, "/\\");
    assert(strcmp(r4, "Hello World") == 0);
    free(r4);

    // Test case 5
    char s5[] = "###Trim Me###";
    char *r5 = ft_strtrim(s5, "#");
    assert(strcmp(r5, "Trim Me") == 0);
    free(r5);

    // Test case 6
    char s6[] = "  C is Fun!   ";
    char *r6 = ft_strtrim(s6, " ");
    assert(strcmp(r6, "C is Fun!") == 0);
    free(r6);

    // Test case 7
    char s7[] = "..C..Rocks!";
    char *r7 = ft_strtrim(s7, ".");
    assert(strcmp(r7, "C..Rocks!") == 0);
    free(r7);

    // Test case 8
    char s8[] = "@@@Example@@@";
    char *r8 = ft_strtrim(s8, "@");
    assert(strcmp(r8, "Example") == 0);
    free(r8);

    // Test case 9
    char s9[] = "";
    char *r9 = ft_strtrim(s9, "");
    assert(strcmp(r9, "") == 0);
    free(r9);

    // Test case 10
    char s10[] = "~~~~Trim~~~~~";
    char *r10 = ft_strtrim(s10, "~");
    assert(strcmp(r10, "Trim") == 0);
    free(r10);

    // Test case 11
    char s11[] = " 123456789 ";
    char *r11 = ft_strtrim(s11, " 987654321");
    assert(strcmp(r11, "") == 0);
    free(r11);

    // Test case 12
    char s12[] = "Hello, World!";
    char *r12 = ft_strtrim(s12, "Hed!");
    assert(strcmp(r12, "llo, Worl") == 0 && strlen(r12) == 9);
    free(r12);

    // Test case 13
    char s13[] = "****Just*Testing****";
    char *r13 = ft_strtrim(s13, "*");
    assert(strcmp(r13, "Just*Testing") == 0 && strlen(r13) == 12);
    free(r13);

    // Test case 14
    char s14[] = "   Let's Trim Some Spaces!   ";
    char *r14 = ft_strtrim(s14, " ");
    assert(strcmp(r14, "Let's Trim Some Spaces!") == 0 && strlen(r14) == 23);
    free(r14);

    // Test case 15
    char s15[] = "$$$$Dollar$$Signs$$";
    char *r15 = ft_strtrim(s15, "$");
    assert(strcmp(r15, "Dollar$$Signs") == 0);
    free(r15);

    // Test case 16
    char s16[] = "<HTML><BODY></BODY></HTML>";
    char *r16 = ft_strtrim(s16, "<>");
    assert(strcmp(r16, "HTML><BODY></BODY></HTML") == 0);
    free(r16);

    // Test case 17
    char s17[] = "Trim**Middle**Part";
    char *r17 = ft_strtrim(s17, "TrimPart");
    assert(strcmp(r17, "**Middle**") == 0);
    free(r17);

    // Test case 18
    char s18[] = "---//C Code//---";
    char *r18 = ft_strtrim(s18, "-/");
    assert(strcmp(r18, "C Code") == 0);
    free(r18);

    // Test case 19
    char s19[] = "     ";
    char *r19 = ft_strtrim(s19, " ");
    assert(strcmp(r19, "") == 0);
    free(r19);

    // Test case 20
    char s20[] = "Whitespace Only!";
    char *r20 = ft_strtrim(s20, " !");
    assert(strcmp(r20, "Whitespace Only") == 0);
    free(r20);

    char s21[] = "1337is So much fun";
    char *r21 = ft_strtrim(s21, "1f33u7n");
    assert(strcmp(r21, "is So much ") == 0);
    free(r21);

    char s22[] = "//This is a comment";
    char *r22 = ft_strtrim(s22, "/");
    assert(strcmp(r22, "This is a comment") == 0);
    free(r22);


    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
