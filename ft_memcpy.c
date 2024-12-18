void *ft_memcpy(void * dest, void const  *source, size_t n)
{
    unsigned char *dst = (unsigned char *)dest;
    unsigned char *src = (unsigned char *)source;

    if (n == 0)
        return NULL;
    while (n--)
    {
        *dst = *src;
        dst++;
        src++;
    }
    return (void *)dst;
}
