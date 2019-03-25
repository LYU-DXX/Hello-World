#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

void main(int argc,char *argv[])
{
	int fd;
	char buff[1024];
	fd=open(argv[1],O_RDWR);
	read(fd,buff,sizeof(buff));
	close(fd);
	fd=open(argv[2],O_RDWR|O_CREAT);
	write(fd,buff,sizeof(buff));
	close(fd);
}

