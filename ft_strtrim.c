#include <stdlib.h>
#include "libft.h"
#include <string.h>

int is_char_set(char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t start;
    size_t end;
    size_t index;
    size_t s1_len;

    if (!s1)
        return (NULL);
    if (!set || !*set)
        return (ft_strdup(s1));
    s1_len = ft_strlen(s1);
    index = 0;
    while (s1[index] && is_char_set(s1[index], set))
        index++;
    if (index == s1_len)
        return (ft_strdup(""));
    start = index;
    index = s1_len - 1;
    while (index > start && is_char_set(s1[index], set))
        index--;
    end = index;
    str = ft_substr(s1, start, end - start + 1);
    return (str);
}

// Function name       ft_strtrim
// Prototype            char *ft_strtrim(char const *s1, char const *set);
// Turn in files -
// Parameters             =  s1: The string to be trimmed.
//                           set: The reference set of characters to trim.
// Return value              The trimmed string.
//                         NULL if the allocation fails.
// External functs        malloc
// Description            Allocates (with malloc(3)) and returns a copy of
//                         ’s1’ with the characters specified in ’set’ removed
//                         from the beginning and the end of the string.
