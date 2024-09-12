#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int index;
    unsigned int s_len;
    char         *output_buffer;

    if (!*s)
    {
        return (ft_strdup(""));
    }
    s_len = (unsigned int) ft_strlen(s);
    index = 0;
    output_buffer = (char*)malloc((s_len + 1) * sizeof(char));
    if (!output_buffer)
    {
        return (0);
    }
    while (index < s_len)
    {
        output_buffer[index] = f(index, s[index]);
        index++;
    }
    output_buffer[index] = '\0';
    return (output_buffer);
}   


// Function name       ft_strmapi
// Prototype           char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
// Turn in files -
// Parameters          s: The string on which to iterate.
//                     f: The function to apply to each character.
// Return value        The string created from the successive applications of ’f’.
//                     Returns NULL if the allocation fails.
// External functs.    malloc
// Description         Applies the function ’f’ to each character of the
//                     string ’s’, and passing its index as first argument
//                     to create a new string (with malloc(3)) resulting
//                     from successive applications of ’f’.