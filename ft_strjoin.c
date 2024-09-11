#include "libft.h"
#include <stdlib.h>
#include <string.h>

size_t _total_len(char const *s1, char const *s2)
{
    size_t s1_size;
    size_t s2_size;

    s1_size = 0;
    s2_size = 0;
    if (s1)
    {
        s1_size = ft_strlen(s1);
    }
    if (s2)
    {
        s2_size = ft_strlen(s2);
    }
    return (s1_size + s2_size);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result_string;
    size_t total_size;
    size_t index;
    size_t index_holder;

    if (!s1 && !s2)
    {
        return (NULL);
    }
    total_size = _total_len(s1, s2);
    index = 0;
    index_holder = index;
    result_string = (char *)malloc((total_size + 1) * sizeof(char));
    if (!result_string)
    {
        return (NULL);
    }
    while (s1 && s1[index] && index < total_size)
    {
        result_string[index] = s1[index];
        index++;
    }
    index_holder = index;
    while (s2 && s2[index - index_holder] && index < total_size)
    {
        result_string[index] = s2[index - index_holder];
        index++;
    }
    result_string[index] = '\0';
    return (result_string);
}

// Function name  : ft_strjoin
// Prototype      : char *ft_strjoin(char const *s1, char const *s2);
// Parameters   s1 : The prefix string.
//              s2: The suffix string.
// Return value   :  The new string.
//                 NULL if the allocation fails.
// External functs :  malloc
// Description    :Allocates (with malloc(3)) and returns a new
//                 string, which is the result of the concatenation
//                 of ’s1’ and ’s2’.