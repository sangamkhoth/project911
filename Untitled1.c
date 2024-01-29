//#include<stdio.h>
//int f1(int)
//int main ()
//{
//	int k;
//	k = f1(3);  
//	printf("%d",k);
//}
//int f1(int n)
//{
//	int s;
//	if (n==1)
//	return 1;
//	else
//	s=n +f1(n-1);
//	return s;
//}



//Fibonacci  series
/*
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
	int n, result,i;
	printf("Enter number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		result = fibo(i);
		printf("%d",result);
	}
	result 0;
}
int fibo(int x)
{
	if(x==0 || x==1)
	result x;
	else
	return fibo(x-1)+fibo(x-2);
}

