#include <stdlib.h>

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

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *res;

    if (s == NULL || f == NULL) 
        return (NULL);
    i = 0;
    len = ft_strlen(s);
    res = (char *)malloc((len + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    while (i < len)
    {
        res[i] = f(i, s[i]);
        ++i;
    }
    res[len] = '\0';
    return (res);
}
