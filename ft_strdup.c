
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*s_start;
	char	*dup;
	char	*dup_start;
	int		len;
	int		i;
	len = 0;
	s_start = s;
	while (*s_start != '\0')
		len++;
	s_start = s;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	dup_start = dup;
	while (i < len)
	{
		*dup_start++ = *s_start++;
		i++;
	}	
	*dup_start = '\0';
	return (dup);
}
