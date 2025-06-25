
#include <stdlib.h>
#include "libft.h"

static char	*word_dup(const char *start, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}


static int	word_counter(char const *s, char c)
{
	int	word_count;
	int	flag;

	flag = 0;
	word_count = 0;
	while (*s != '\0')
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			word_count++;
		}
		else if (*s == c && flag == 1)
			flag = 0;

		s++;
	}
	return (word_count);
}


char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;
	int		index;
    int		start;
    int		end;

	index = 0;
	word_count = word_counter(s, c);
	array = malloc(sizeof(char*) * (word_count + 1));
	if(array == NULL)
		return (NULL);
	start = -1;
	end = 0;

	while (s[end])
	{
		if (s[end] != c && start < 0)
			start = end;
        if ((s[end] == c || s[end + 1] == '\0') && start >= 0)
        {
            int len = end - start + (s[end] == c ? 0 : 1);
            array[index] = word_dup(s + start, len);
			index++;
            start = -1;
        }
		end++;
	}
	array[index] = NULL;
	return (array);
}
