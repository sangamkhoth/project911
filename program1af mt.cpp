//#include <stdio.h>
//int main (){
//int numb[] = {1,2,3,4,5,6,7,8,9};
//int i; 
//for (i =0;i<9; i++){
//	printf("%d\n",numb[i]);
//}
//}


//#include<stdio.h>
//
//int main(){
//	int a[5], p=0, n=0, z=0, i,m;
//	for (i=0; i<5;i++){
//		scanf("%d",&a[i]);
//	}
//	for (m=0; m<5; m++){
//		if(a[m]>0){
//			p++;
//		}
//		else if (a[m]<0){
//			n++;
//		}
//		else
//		z++;
//		
//	}
//	printf("%d",p);\
//	printf("%d",n);
//	printf("%d",z);
//}


//WAP TO FIND THE MINI AND MAX OF AN ARRAY

/*
#include <stdio.h>
int main(){
	int arr[5];
	int min = 1;
//	int min =0;
	for (int i =0;i<=5; i++){
		scanf("%d",&arr[i]);
		if( min > arr[i]){
			min= arr[i];
		}
	}
	printf("the small value is%d", min);
	return 0;
}*/




/*
#include <stdio.h>
int main(){
	int arr[5];
	int max = 1;
	int second;
	for (int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		if (max<arr[i]){
			max = arr[i];
		}
		printf("the biggest value is %d ",max);
		second = max - 1;
		printf("the second biggest value is %d\n" ,second);
		return 0;
	}
	
}*/

/*
#include <stdio.h>
int main(){
	int num[]= {1,2,3,4,5};
	int i;
	for( i=0;i<5;i++){
//		scanf("%d",&num[i]);
		printf("%d\n",num[i]);
	}
	for( i=5;i>03;i--){
//		scanf("%d",&num[i]);
		printf("%d\n",num[i]);
	}
}*/

#include <stdio.h>
int main(){
	int a[5],b[5],i;
	printf("Enter First array");
	for (i=0;i<5;i++){
	  scanf("%d",&a[i]);
	printf("\nEnter second array");
	}
	for (i=0;i<5;i++){
		scanf("%d",&b[i]);
		printf(" array after swaping");
	
	}
	a[0]=b[1];
	a[1]=b[2];
	a[2]=b[3];

}
	




