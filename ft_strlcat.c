#include <string.h>
#include <stdio.h>

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

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t index;
    size_t dst_size;
    int j_index;

    dst_size = ft_strlen(dst);
    index = 0;
    j_index = 0;
    if (size < dst_size)
    {
        return (size + ft_strlen(src));
    }
    while (dst[index])
    {
        index++;
    }
    while (src[j_index] && j_index < (int)(size - dst_size - 1))
    {
        dst[index] = src[j_index];
        index++;
        j_index++;
    }
    dst[index] = '\0';
    return (dst_size + ft_strlen(src));
}