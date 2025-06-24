
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*res;
	size_t	i;

	n = ft_strlen(s);
	res = malloc(n + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
