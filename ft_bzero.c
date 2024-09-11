#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    size_t index;

    index = 0;
    while (index < n)
    {
       ((unsigned char*)s)[index] = '\0';
       index++;
    }
    
}