#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t index;
    char *tmp_array[n];

    index = 0;
    while (index < n)
    {
        ((char*)tmp_array)[index] = ((char*)src)[index];
        index++;
    }
    index = 0;
    while (index < n)
    {
        ((char*)dest)[index] =((char*)tmp_array)[index];
        index++;
    }
    return (dest);
    
}