#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
main()
{
int wrfd,rdfd,n;
char buf[50],line[50];
wrfd=open("np1",O_WRONLY);
rdfd=open("np2",O_RDONLY);
printf("enter line of text");
scanf("%s",line);
write(wrfd,line,strlen(line));
n=read(rdfd,buf,50);
buf[n]='\0';
printf("read from the pipe:%s\n",buf);
}

 