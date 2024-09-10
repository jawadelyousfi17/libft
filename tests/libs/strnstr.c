#include <string.h>

char *strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len;
    size_t i;

    if (*needle == '\0') {
        return (char *)haystack;  // Empty needle always matches
    }

    needle_len = 0;
    while (needle[needle_len] != '\0') {
        needle_len++;
    }

    for (i = 0; i <= len - needle_len && haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[0] && strncmp(&haystack[i], needle, needle_len) == 0) {
            return (char *)&haystack[i];
        }
    }

    return NULL;
}
