//#include <stdio.h>
//int main()
//{
//	int i=10;
//	int*p = &i;
//	printf("%d\n",(int)*p);
//	return 0;
//}




#include <stdio.h>
int x=0;
int main()
{
	int*const ptr = &x;
	printf ("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
}
