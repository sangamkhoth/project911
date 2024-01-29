//#include<stdio.h>
//mian()
//{
//	int x,y;
//	y=sizeof(float);
//	printf("%d",y);
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *ptr = NULL;
	char string[34];
	ptr = fopen("myfile.txt", "r");
	fscanf(ptr, "%s",string);
	printf("content of this file has %s\n",string);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *fp;
	l
	fp = fopen(" mylife.txt","r");
	while (1)
	{
		ch = fget (fp) ;
		if ( ch == EOF)
		break;
		printf("%c",ch);
		
	}
	printf("\n");
	fclose (fp);
	getch();
	return 0;
	
}
