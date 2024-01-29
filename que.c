/*#include <stdio.h>
int main()
{
    signed char chr;
    chr = 128;
    printf("%d\n",chr);
    return 0;
}*/



/*#include <stdio.h>
main()
{
	int i=1,j=1;
	for(--i&&j++;i<10;i+=2)
	{
		printf("loop");
	}
}*/



# include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i = 0; i < n; i++)
{
for(int j=0;j<n;j++){
if(j<n-i && j>=i){
printf("*");
}
else{
printf(" ");
}
}
printf("\n");
}

}
