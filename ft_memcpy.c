#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	if (dest == NULL ||src == NULL)
		return (NULL);
	dest_cpy = dest;
	src_cpy = src;
	i = 0;
	while (i < n)
	{
		*dest_cpy = *src_cpy;
		dest_cpy++;
		src_cpy++;
		i++;
	}
	return(dest);
}
