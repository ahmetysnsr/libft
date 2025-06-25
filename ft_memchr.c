
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*arr;

	if (n == 0 || s == NULL)
		return (NULL);
	arr = s;
	i = 0;
	while (i < n)
	{
		if((unsigned char)c == *arr)
			return ((void*)(arr));
		arr++;
		i++;
	}
	return (NULL);
}
