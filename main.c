#include "libft.h"
#include <stdio.h>

int main(void)
{
	
	int nums1[] = {21, 33, 55, 321};
	int nums2[] = {21, 33, 44, 321};

	char *cr1 = ft_strdup("SELAM NASILSIN");
	char *cr2 = ft_strdup("SELAM MERHABA");
	int x = ft_memcmp(nums1, nums2, sizeof(int) * 4);

//	printf("%d", x);

	char *ss = ft_memchr(cr1, 'A', ft_strlen(cr1) + ft_strlen(cr2));

	printf("%s",(char*) ss);


}

