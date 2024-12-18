#include <string.h>

size_t ft_strlen(const char *str)
{
    int i;

    if (str == NULL)
        return (0);
    i = 0;
    while (str[i])
        ++i;
    return (i);
}

char *ft_strcat (char *dest, const char *src)
{
    int i;
    int j;
    
    int len = ft_strlen(src);
    i = -1;
    j = -1;
    if (dest == NULL || src == NULL || (dest < src && (dest + len > src)))
        return (NULL);
    while (dest[++i]);
    while (src[++j])
    {
        dest[i] = src[j];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}

