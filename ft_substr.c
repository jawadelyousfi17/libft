#include <string.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t index;
    size_t start_index;
    char   *substring;

    if (!s)
    {
        return (NULL);
    }
    if (start >= ft_strlen(s))
    {
        return (ft_strdup(""));
    }
    index = 0;
    start_index = start;
    substring = (char*)malloc((len + 1) * sizeof(char));
    if (!substring)
    {
        return (NULL);
    }
    while (s[start_index] && index < len)
    {
        substring[index] = s[start_index];
        index++;
        start_index++;
    }
    substring[index] = '\0';
    return (substring);    
}



// s:               The string from which to create the substring.
// start:           The start index of the substring in the
//                  string ’s’.
// len:             The maximum length of the substring.
// Return value :
//                   The substring.
//                  NULL if the allocation fails.
// External functs:  malloc
// Description :
//                   Allocates (with malloc(3)) and returns a substring
//                   from the string ’s’.
//                   The substring begins at index ’start’ and is of
//                   maximum size ’len’.
