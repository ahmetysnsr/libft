
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    const char	*s_chr;

    s_chr = s;
    while (*s_chr != '\0')
    {
        if (*s_chr == (char)c)
            return ((char *)s_chr);
        s_chr++;
    }
    if ((char)c == '\0')
        return ((char *)s_chr);
    return (NULL);
}
