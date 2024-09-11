#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>

void test_ft_strjoin()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_strjoin(char const *s1, char const *s2)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    // init
    char prfx[50] = "1337";
    char sfx[50] = " is great!";
    char *newstr = ft_strjoin(prfx, sfx);
    assert(strcmp(newstr, "1337 is great!") == 0);
    free(newstr);

    char *prfx1 = NULL;
    char sfx1[50] = " is great!";
    char *newstr1 = ft_strjoin(prfx1, sfx1);
    assert(strcmp(newstr1, " is great!") == 0);
    free(newstr1);

    char *prfx2 = NULL;
    char *sfx2 = NULL;
    char *newstr2 = ft_strjoin(prfx2, sfx2);
    assert(newstr2 == 0);
    free(newstr2);

    char *prfx13 = "";
    char *sfx13 = NULL;
    char *newstr13 = ft_strjoin(prfx13, sfx13);
    assert(strcmp(newstr13, "") == 0);
    free(newstr13);

    char *prfx3 = "";
    char sfx3[50] = "";
    char *newstr3 = ft_strjoin(prfx3, sfx3);
    assert(strcmp(newstr3, "") == 0);
    free(newstr3);

    char prfx4[50] = " Are you okay ?";
    char sfx4[50] = "Are you okay ?";
    char *newstr4 = ft_strjoin(prfx4, sfx4);
    assert(strcmp(newstr4, " Are you okay ?Are you okay ?") == 0 && strlen(prfx4) + strlen(sfx4) == strlen(newstr4));
    free(newstr4);

    // Test case 5: Joining Two Identical Strings
    char prfx5[50] = "Hello";
    char sfx5[50] = "Hello";
    char *newstr5 = ft_strjoin(prfx5, sfx5);
    assert(strcmp(newstr5, "HelloHello") == 0 && strlen(prfx5) + strlen(sfx5) == strlen(newstr5));
    free(newstr5);

    // Test case 6: Joining Empty Prefix with Non-Empty Suffix
    char prfx6[50] = "";
    char sfx6[50] = "Non-empty suffix";
    char *newstr6 = ft_strjoin(prfx6, sfx6);
    assert(strcmp(newstr6, "Non-empty suffix") == 0 && strlen(prfx6) + strlen(sfx6) == strlen(newstr6));
    free(newstr6);

    // Test case 7: Joining Non-Empty Prefix with Empty Suffix
    char prfx7[50] = "Non-empty prefix";
    char sfx7[50] = "";
    char *newstr7 = ft_strjoin(prfx7, sfx7);
    assert(strcmp(newstr7, "Non-empty prefix") == 0 && strlen(prfx7) + strlen(sfx7) == strlen(newstr7));
    free(newstr7);

    // Test case 8: Joining Two Empty Strings
    char prfx8[50] = "";
    char sfx8[50] = "";
    char *newstr8 = ft_strjoin(prfx8, sfx8);
    assert(strcmp(newstr8, "") == 0 && strlen(prfx8) + strlen(sfx8) == strlen(newstr8));
    free(newstr8);

    // Test case 9: Joining Strings with Special Characters
    char prfx9[50] = "Special!@#";
    char sfx9[50] = "$%^&*Characters";
    char *newstr9 = ft_strjoin(prfx9, sfx9);
    assert(strcmp(newstr9, "Special!@#$%^&*Characters") == 0 && strlen(prfx9) + strlen(sfx9) == strlen(newstr9));
    free(newstr9);

    // Test case 10: Joining String with Whitespaces
    char prfx10[50] = "Whitespace ";
    char sfx10[50] = "Check";
    char *newstr10 = ft_strjoin(prfx10, sfx10);
    assert(strcmp(newstr10, "Whitespace Check") == 0 && strlen(prfx10) + strlen(sfx10) == strlen(newstr10));
    free(newstr10);

    // Test case 11: Same string
    char prfx11[50] = "1337";
    char *newstr11 = ft_strjoin(prfx11, prfx11);
    assert(strcmp(newstr11, "13371337") == 0 && strlen(prfx11) + strlen(prfx11) == strlen(newstr11));
    free(newstr11);

    // Test case 12 : Dont change the input
    char prfx12[50] = "1337 ";
    char *prfx12_holder = prfx12;
    char *newstr12 = ft_strjoin(prfx12, prfx12);
    assert(strcmp(newstr12, "1337 1337 ") == 0 && strlen(prfx12) + strlen(prfx12) == strlen(newstr12) && prfx12 == prfx12_holder);
    free(newstr12);


    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
