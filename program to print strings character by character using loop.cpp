#include <stdio.h>
int main()
{
	char name[] ={"lovely professional university"};
	int i=0;
	while(name[i]!='\0')
	{
		printf("%c", name[i]);
		i++;
	}
}
