#include <stdio.h>
#include <assert.h>
#include "../libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "test.h"

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


#define DURATION 500
#define WAIT(x) 

int main(int ac, char *av[])
{
    int duration = 180;
    if (ac == 2)
    {
        if (strcmp(av[1], "-fast") == 0 || strcmp(av[1], "-f") == 0)
            duration = 0;
    }
    printf("\033[1;32m"
           "\n\n"
           "██╗     ██╗██████╗ ███████╗████████╗\n"
           "██║     ██║██╔══██╗██╔════╝╚══██╔══╝\n"
           "██║     ██║██████╔╝█████╗     ██║   \n"
           "██║     ██║██╔══██╗██╔══╝     ██║   \n"
           "███████╗██║██████╔╝██║        ██║   \n"
           "╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   \n"
           "                                    \n"
           "\033[0m"    // Reset color
           "\033[0;36m" // Bold Cyan for additional info
           "   by: @jel-yous       \n"
           "   GitHub: https://github.com/jawadelyousfi17/libft\n"
           "   If you encounter any issues or bugs,\n"
           "   please report them on the GitHub page.\n\n\n"
           "\033[0m" // Reset color
    );
    (void) duration;
    WAIT(duration);
    test_ft_strlen();
    WAIT(duration);
    test_ft_isalnum();
    WAIT(duration);
    test_ft_isalpha();
    WAIT(duration);
    test_ft_isascii();
    WAIT(duration);
    test_ft_isdigit();
    test_ft_isprint();
    WAIT(duration);
    test_ft_strncmp();
    WAIT(duration);
    test_ft_strnstr();
    WAIT(duration);
    test_ft_strrchr();
    WAIT(duration);
    test_ft_tolower();
    WAIT(duration);
    test_ft_toupper();
    WAIT(duration);
    test_ft_strchr();
    WAIT(duration);
    test_ft_strlcat();
    WAIT(duration);
    test_ft_strlcpy();
    WAIT(duration);
    test_ft_atoi();
    WAIT(duration);
    test_ft_memcmp();
    WAIT(duration);
    test_ft_memcpy();
    WAIT(duration);
    test_ft_memset();
    WAIT(duration);
    test_ft_memmove();
    WAIT(duration);
    printf("\033[1;32m"
           "\n\n"
           "██████╗  ██████╗ ███╗   ██╗███████╗\n"
           "██╔══██╗██╔═══██╗████╗  ██║██╔════╝\n"
           "██║  ██║██║   ██║██╔██╗ ██║█████╗  \n"
           "██║  ██║██║   ██║██║╚██╗██║██╔══╝  \n"
           "██████╔╝╚██████╔╝██║ ╚████║███████╗\n"
           "╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚══════╝\n"
           "                                   \n"
           "\033[1;33m" // Bold Cyan for extra style
           "✅ ALL TESTS PASSED SUCCESSFULLY! ✅\n"
           "\033[1;33m" // Bold Yellow for encouragement
           "               1337 KH\n\n"
           "\033[0;36m" // Bold Cyan for additional info
           "   by: @jel-yous       \n"
           "   GitHub: https://github.com/jawadelyousfi17/libft\n"
           "   If you encounter any issues or bugs,\n"
           "   please report them on the GitHub page.\n"
           "\033[0m" // Reset color
    );
    return 0;
}