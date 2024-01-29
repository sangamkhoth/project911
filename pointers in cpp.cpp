#include<iostream>
using namespace std;
int main(){
	int a=3;
	int*b=&a;//&----address of operator,,,,,,,,,*-----dereference operator
	cout<<b<<endl;//address of a
	cout<<*b<<endl;//value of a
	int **c=&b;
	cout<<"the address of b is "<<&b<<endl;
	cout<<"the address of b is "<<c<<endl;
	cout<<"the value of b is "<<*c<<endl;
	cout<<"the value of b is "<<**c<<endl;
	return 0;
}
