#include <stdio.h>
#include <string.h>
int main()
{
	char ori[20],dup[20];
	char *z;
	printf("\n enter your name:");
	gets(dup);
	printf("\n enter new name:");
	gets(ori);
	z = strcpy(dup,ori);
	printf("original string is:%s",ori);
	printf("\nduplicate string is:%s",dup);
	printf("\n value of z is:%s",z);
	return 0;
}
