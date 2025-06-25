#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	int fd = open("dosya.txt", O_CREAT |O_RDWR, 0644);

	ft_putendl_fd( "selamlar merhabalar",fd);	
	ft_putchar_fd('\n',fd);
	ft_putendl_fd("YENİ SARITA GEÇİLDİ",fd);	

	char vuffer[500];
	read(fd, vuffer, 499);
	vuffer[499] = '\0';

	printf("%s", vuffer);


	close(fd);

    return 0;
}
