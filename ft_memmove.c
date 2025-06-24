
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*buffer_src;
	unsigned char		*buffer_dest;

	if (dst == src || len == 0)
		return (dst);
	buffer_dest = (unsigned char *)dst;
	buffer_src = (const unsigned char *)src;
	if (buffer_dest > buffer_src)
	{
		i = len;
		while (i-- > 0)
			buffer_dest[i] = buffer_src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			buffer_dest[i] = buffer_src[i];
			i++;
		}
	}
	return (dst);
}
