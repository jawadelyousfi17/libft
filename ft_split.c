#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int count_words(char const *str, char c)
{
    int in_word;
    int counter;

    counter = 0;
    in_word = 0;
    while (*str)
    {
        while (*str && *str == c)
        {
            str++;
        }
        while (*str && *str != c)
        {
            str++;
            in_word = 1;
        }
        if (in_word)
        {
            counter++;
            in_word = 0;
        }
    }
    return (counter);
}

char *custum_strdup(const char *s, int len)
{
    int index;
    char *new_s;

    new_s = (char *)malloc((sizeof(char) * (len + 1)));
    if (!new_s)
    {
        return (0);
    }
    index = 0;
    while (index < len)
    {
        new_s[index] = s[index];
        index++;
    }
    new_s[index] = '\0';
    return (new_s);
}

char **ft_split(char const *s, char c)
{
    char **splited_string;
    int size;
    int start_index;
    int index;
    int in_word;

    index = 0;
    in_word = 0;
    start_index = 0;
    size = count_words(s, c);
    splited_string = (char **)malloc((size + 1) * sizeof(char *));
    while (*s)
    {
        while (*s && *s == c)
        {
            s++;
        }
        start_index = 0;
        while (*s && *s != c)
        {
            s++;
            start_index++;
            in_word = 1;
        }
        if (in_word)
        {
            splited_string[index] = custum_strdup(s - start_index, start_index);
            index++;
            in_word = 0;
        }
    }
    splited_string[index] = 0;
    return (splited_string);
}

// Function name       ft_split
// Prototype            char **ft_split(char const *s, char c);
// Turn in files -
// Parameters           s: The string to be split.
//                     c: The delimiter character.
// Return value        The array of new strings resulting from the split.
//                     NULL if the allocation fails.
// External functs.     malloc, free
// Description          Allocates (with malloc(3)) and returns an array
//                     of strings obtained by splitting ’s’ using the
//                     character ’c’ as a delimiter. The array must end
//                     with a NULL pointer.
