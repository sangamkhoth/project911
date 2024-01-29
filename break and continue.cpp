#include<iostream>
using namespace std;
int main(){
	for (int i = 0; i < 4; i++)
	{
		//cout<<i<<endl;
		if (i==2){
			//break;
			continue;
		}
		cout<<i<<endl;//2 will not be printed
		
	}
	return 0;
}







