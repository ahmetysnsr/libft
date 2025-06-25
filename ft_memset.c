
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*block;
	size_t			i;
	
	block = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		*block = (unsigned char)c;
		block++;
		i++;
	}
	return(s);
}
