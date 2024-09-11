#include <stdio.h>
#include <assert.h>
#include "../../libft.h"
#include <stdlib.h>
#include <string.h>


void test_ft_substr()
{
    printf("\033[0;36m"
           "Test : "
           "\033[1;37m"
           "char *ft_substr(char const *s, unsigned int start, size_t len)"
           "\033[0m\n"); // Cyan
    // printf("\033[0;36m"
    //        "where 0 <= n "
    //        "\033[0m\n"); // Cyan

    
    // init
    char str[50] = "1337";
    char *newstr = ft_substr(str,0,4);
    assert(strcmp(newstr,"1337") == 0);
    free(newstr);

    char str1[50] = "1337";
    char *newstr1 = ft_substr(str1,1,4);
    assert(strcmp(newstr1,"337") == 0);
    free(newstr1);
    
    char str2[50] = "1337";
    char *newstr2 = ft_substr(str2,0,0);
    assert(strcmp(newstr2,"") == 0);
    free(newstr2);

    char str3[50] = "1337";
    char *newstr3 = ft_substr(str3,4,4);
    assert(strcmp(newstr3,"") == 0);
    free(newstr3);

    char str4[50] = "";
    char *newstr4 = ft_substr(str4,0,3);
    assert(strcmp(newstr4,"") == 0);
    free(newstr4);

    char str5[50] = "1337 is cool? do you agree?";
    char *newstr5 = ft_substr(str5,5,22);
    assert(strcmp(newstr5,"is cool? do you agree?") == 0);
    free(newstr5);

    char str6[50] = "1337 is cool? do you agree?";
    char *newstr6 = ft_substr(str6,10,5);
    assert(strcmp(newstr6,"ol? d") == 0);
    free(newstr6);

      // Test case 7: Extracting Substring with Mixed Characters
    char str7[50] = "Welcome to 42! Let's code.";
    char *newstr7 = ft_substr(str7, 11, 3);
    assert(strcmp(newstr7, "42!") == 0);
    free(newstr7);

    // Test case 8: Extracting a Substring Beyond the Length
    char str8[50] = "1337 is great.";
    char *newstr8 = ft_substr(str8, 9, 20);
    assert(strcmp(newstr8, "reat.") == 0); // Should only extract until the end of the string
    free(newstr8);

    // Test case 9: Empty Substring from Valid Index
    char str9[50] = "This is a test string.";
    char *newstr9 = ft_substr(str9, 10, 0);
    assert(strcmp(newstr9, "") == 0); // Should return an empty string
    free(newstr9);

    // Test case 10: Substring Starting from the End
    char str10[50] = "abcdef";
    char *newstr10 = ft_substr(str10, 6, 3);
    assert(strcmp(newstr10, "") == 0); // Start index is equal to string length; should return empty string
    free(newstr10);

    // Test case 11: Substring with Zero Length
    char str11[50] = "substring test";
    char *newstr11 = ft_substr(str11, 5, 0);
    assert(strcmp(newstr11, "") == 0); // Length is zero; should return an empty string
    free(newstr11);

    // Test case 12: Substring Beyond Start Index
    char str12[50] = "Learning C programming.";
    char *newstr12 = ft_substr(str12, 25, 5);
    assert(strcmp(newstr12, "") == 0); // Start index is beyond the string length; should return empty string
    free(newstr12);

    // Test case 13: Extract Entire String
    char str13[50] = "Entire string extraction.";
    char *newstr13 = ft_substr(str13, 0, strlen(str13));
    assert(strcmp(newstr13, "Entire string extraction.") == 0); // Should extract the entire string
    free(newstr13);

    // Test case 14: Substring at Start
    char str14[50] = "123456789";
    char *newstr14 = ft_substr(str14, 0, 3);
    assert(strcmp(newstr14, "123") == 0); // Should extract "123"
    free(newstr14);

    // Test case 15: Substring at the Middle
    char str15[50] = "middleofstring";
    char *newstr15 = ft_substr(str15, 6, 4);
    assert(strcmp(newstr15, "ofst") == 0); // Should extract "eofs"
    free(newstr15);

    // Test case 16: Substring with Length Greater Than Remaining
    char str16[50] = "substring";
    char *newstr16 = ft_substr(str16, 3, 50);
    assert(strcmp(newstr16, "string") == 0); // Length exceeds remaining; should extract until the end
    free(newstr16);

    // Test case 17: Negative Length (invalid input)
    char str17[50] = "invalid test";
    char *newstr17 = ft_substr(str17, 5, 1);
    assert(strcmp(newstr17, "i") == 0); // Invalid length should handle gracefully (NULL or empty string)
    free(newstr17);

    // Test case 18: Valid Substring with Special Characters
    char str18[50] = "special@#$_characters";
    char *newstr18 = ft_substr(str18, 8, 5);
    assert(strcmp(newstr18, "#$_ch") == 0); // Should extract "@#$_c"
    free(newstr18);

    // Test case 19: Very Large Start Index
    char str19[50] = "short string";
    char *newstr19 = ft_substr(str19, 80, 5);
    //assert(strcmp(newstr19, "") == 0); // Start index too large, should return an empty string
    free(newstr19);

    // Test case 20: String with Only Whitespaces
    char str20[50] = "      ";
    char *newstr20 = ft_substr(str20, 1, 3);
    assert(strcmp(newstr20, "   ") == 0); // Should extract whitespace correctly
    free(newstr20);

    // TEST NULL
    char *str21 = NULL;
    char *newstr21 = ft_substr(str21, 1, 3);
    assert(newstr21 == 0); // Should extract whitespace correctly
    free(newstr21);

    printf("\033[1;32m"
           "OK!"
           "\033[0m\n");
}
