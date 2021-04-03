#include "libft.h"

void    *memmove(void *dest, const void *src, size_t n)
{
    char *srccpy;
    char *destcpy;
    char *buffer;
    unsigned int i;

    srccpy = (char*)src;
    destcpy = (char*)dest;
    i = 0;
    while (i < n)
    {
        destcpy[i] = srccpy[i];
        i++;
    }
    return (dest);
}