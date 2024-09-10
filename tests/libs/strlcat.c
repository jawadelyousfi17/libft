#include <string.h>

size_t strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);
    size_t i;

    if (dstsize <= dst_len) {
        return (dstsize + src_len);  // Not enough space in dst
    }

    for (i = 0; i < (dstsize - dst_len - 1) && src[i] != '\0'; i++) {
        dst[dst_len + i] = src[i];
    }
    dst[dst_len + i] = '\0';  // Null-terminate the result

    return (dst_len + src_len);
}
