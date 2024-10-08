#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t index;

    if (n == 0)
        return 0;
    index = 0;
    while (index < n)
    {
        if (((unsigned char*)s1)[index] != ((unsigned char*)s2)[index])
        {
            return (((unsigned char*)s1)[index] - ((unsigned char*)s2)[index]);
        }
        index++;
    }
    return (0);
}