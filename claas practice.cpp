/*#include<stdio.h>
int main()
{
	int i,sum,x;
	//printf("enter the value:");
	//scanf("%d",&i);
	for(i=1;x<=20;i++){
		if(i==7){
			break;
		}
		if(i==8){
			continue;  
		}
			printf("%d\n",i);
	}

}*/

/*#include <stdio.h>
int main(){
for(int j=1;j<=3;j++){
int i;
printf("enter any number : ");
scanf("%d",&i);
if(i%2==0)
{
printf("loop break");
break;
}
}
return 0;
}
*/

//writE A PROGRAM TO ENTER EVEN VALUE TO STOP THE PROGRAM AND YOU USER WILL BE GIVEN THREEE CHANCES::::
//PROGRAM TO PRINT A TABLE UPTO A GIVEN NUMBER::::

/*#include <stdio.h>
int main()
{
	int i,j,k;
	printf("Enter a number:");
	scanf("%d", &k);
	printf("the tables from 1 to %d: \n, k");
	for(i=1; i<k; i++){
		for(j=1; j<=10; j++){
			printf("%d ",i*j);
			
		} // end inner for loop
		printf("\n");
		
		
	} //end outer for outer loop
	return 0;
	
	
	
	
}*/
 //create star pattern
 
 
 
 
//WAP TO READ 5 NUMBERS FROM USER AND FIND SUM AND AVERAGE//

/*#include <stdio.h>
int main()
{       
    int i,n,sum=0;
	float avg;
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
                printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);
 
}*/




/*#include<stdio.h>
main()
{
	int x;
	printf("enter a number: ");
	scanf("%d",&x);
	if (x%2==0)
		goto even;
	else
		goto odd;
	even:
		printf("%d is even", x);
	odd:
		printf("%d is odd", x);
}*/


/*
int main()
{
	int i,j,k;
	for (i=0;i<10;i++)
	{
		for (j=0;j<5;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d %d %d\n",i,j,k);
				if(j==3)
				{
					goto out;
				}
			}
		}
	}
	out:
		printf("yes");
}*/



/*
#include<stdio.h>
main()
{
	signed int a = -10;
	unsigned int b = 20;
	printf("%f",a<b);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	double x =1.2;
	int sum = (int)x +1;
	printf("%d",sum);
}*/




/*
#include<stdio.h>
int main()
{
	int x =10;
	char y ='a';
	x=x+y;
	float z = x+1.0;
	printf("x=%d,z=%f",x,z);
	return 0;
}*/


/*
#include<stdio.h>
int main(){
	    int n;  
    printf("Enter the number of rows : ");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
            printf("*$");  
        }  
        printf("\n");  
    }  
    return 0;  

}*/



/*
#include<stdio.h>
int main() 
{ 
int a=6543; 
printf("*%5d,*%-5d*",a,a); 
return 0;
 } */
 
/* 
#include<stdio.h>
main()  
{
int x;
for(x=97; x<=122; x++)
{
printf("%c", x); //Implicit casting from int to char thanks to %c
} 
}*/

/*
#include<stdio.h>
main()
{
int x;
for(x=97; x<=122; x++)
{
printf("%c", (char)x); //Explicit casting from int to char
}
}
*/

//#include<stdio.h>
//void myFunction() {
//	printf("Hello World");
//}
//int main() {
//	myFunction();
//	return 0;
//}

//#include<stdio.h>
//void myfunction (){
//	printf("Hello");
//	
//}
//int main() {
//	myfunction();
//	return 0;
//}


//#include <stdio.h>
//int sum();
//main()
//{
//	int result;
//	printf("\nGoing to calculate the sum of 2 numbers:");
//	result = sum();
//	printf("%d", result);
//}
//int sum () {
//int a,b;
//printf("\n Enter two numbers");
//scanf("%d %d", &a,&b);
//return a+b;
//
//}
//
//
//#include <stdio.h>
//void sum(int, int);
//void main()
//{
//
//	int a,b, result;
//	printf("\nGoing to calculate the su of two numbers:");
//	printf("\n Enter the  two numbers:");
//	scanf("%d%d",&a,&b);
//	sum(a,b);
//	
//}
//void sum(int a, int b)
//{
//printf("\n The sum is %d", a+b);	
//}
//
//#include<stdio.h>
//void f1(int a, int b)
//{
//	int c;
//	c=a;a=b; b=c;
//}
//void f2(int*a,int*b)
//{
//	int c;
//	c=*a;*a=*b;*b=c;
// } 
// int main()
// {
// 	int a=4, b=5,c=6;
// 	f1(a,b);
// 	f2(&b,&c);
// 	printf("%d",c-a-b);
// 	return 0;
// }

#include<stdio.h>
int f1 (int)
int main ()
{
	int k;
	k= f1(3);  
	printf("%d",k);
}
int f1(int n)
{
	int s;
	if (n==1)
	return 1;
	else
	s=n +f1(n-1);
	return s;
}
