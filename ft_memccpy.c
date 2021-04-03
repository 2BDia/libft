#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *srccpy;
    char *destcpy;
    unsigned int i;

    srccpy = (char*)src;
    destcpy = (char*)dest;
    i = 0;
    while (i < n && srccpy[i] != c)
    {
        destcpy[i] = srccpy[i];
        i++;
    }
    if (srccpy[i] == c)
    {
        destcpy[i] = srccpy[i];
        return ()
    }
}
