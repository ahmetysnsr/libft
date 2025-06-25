
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_cmp;
	const unsigned char	*s2_cmp;

	s1_cmp = s1;
	s2_cmp = s2;

	i = 0;
	while (i < n)
	{
		if (*s1_cmp !=  *s2_cmp)
			return (*s1_cmp - *s2_cmp);
		i++;
		s1_cmp++;
		s2_cmp++;
	}
	return (0);
}
