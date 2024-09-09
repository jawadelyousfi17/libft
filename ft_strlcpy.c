#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t size;

    size = 0;
    while (s[size])
    {
        size++;
    }
    return (size);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t index;

    index = 0;
    if (size == 0)
    {
        return (ft_strlen(src));
    }
    while (index < size - 1 && src[index])
    {
        dst[index] = src[index];
        index++;
    }
    dst[index] = '\0';
    return (ft_strlen(src));
}
