#include <stdlib.h>
#include <string.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *result;
    size_t index;
    size_t total_size;

    total_size = nmemb * size;
    result = malloc(total_size);
    if (!result)
    {
        return (NULL);
    }
    index = 0;
    while (index < total_size)
    {
        ((unsigned char*)result)[index] = 0;
        index++;
    }
    return (result);
}