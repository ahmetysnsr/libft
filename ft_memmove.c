
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_move;
	const unsigned char	*src_move;


	if (dst == NULL && src == NULL)
		return NULL;
	dst_move = (unsigned char*)dst;
	src_move = (const unsigned char*)src;
	if(src_move > dst_move)
	{
		i = 0;
		while (i < n)
		{
			*dst_move = *src_move;
			dst_move++;
			src_move++;
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(dst_move + n - 1) = *(src_move + n - 1);
			n--;
		}
	}
	return (dst);
}
