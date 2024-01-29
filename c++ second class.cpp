//program to add two numbers
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num1;
//	int num2;
//	int add;
//	cout<<"enter first number:";
//	cin>>num1;
//	cout<<"enter second number:";
//	cin>>num2;
//	add=num1+num2;
//	cout<<"addition is:"<<add<<endl;
//	return 0;
//	
//}









//scope resolution operator

//#include<iostream>
//using namespace std;
//char c='a';//global variable
//int main()
//{
//	char c='b';//local variable
//	cout<<"local variable:"<<c<<"\n";
//	cout<<"global variable:"<<::c<<"\n";//using scope resolution operator
//	return 0;
//}









//inside the class definition
//#include<iostream>
//using namespace std;
//class abc
//{
//	private:  //Access specifier
//		int rollno;
//		char name[20];
//		public:
//			void getdata() //inline function
//			{
//				cout<<"name=";
//				cin>>name;
//				cout<<"rollno=";
//				cin>>rollno;
//			}
//			void display()
//			{
//				cout<<"name="<<name;
//				cout<<"rollno="<<rollno;
//			}
//};




/*
#include<iostream>
using namespace std;
class abc
{
	private:
		int rollno;
		char name[20];
		public:
			void getdata();
			void display();
};
void abc::getdata()
{
	cout<<"name=";
	cin>>name;
	cout<<"rollno=";
	cin>>rollno;
}
void abc::display()
{
	cout<<"name and rollno=";
	cout<<name<<rollno;
}
int main()
{
	abc obj;
	obj.getdata();
	obj.display();
	return 0;
}*/

/*
//public
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
};
int main()
{
	A ob1;
	ob1.a=10;
	cout<<ob1.a<<"\n";
}*/


/*
#include<iostream>
using namespace std;
class A
{
	private:
		int a;
		public:
			void fill()
			{
				cin>>a;
				cout<<a;
			}
};
main()
{
	int c;
	A oba;
	//  oba.a=10;//valid as 'a' is private member.
	oba.fill();//valid as fill() is a public member	
}*/




//#include<iostream>
//using namespace std;
//int main(){
//
//struct {
//	int a;
//	float b;
//	string c;
//	
//} abc1;
//	abc1.a=1;
//	abc1.b=10.1;
//	abc1.c="jj";
//	cout<<abc1.a<<endl<<abc1.b<<endl<<abc1.c<<endl;
//	return 0;
//
//
//}


//array of structure
/*#include<iostream>
using namespace std;
struct emp // structure name (emp)
{
	string name;//structure member
};
int main()
{
	emp e[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the name of the employee no."<<i+1<<":";
		cin>>e[i].name;
	}
	cout<<"\nNames of all employees:\n";
	for(i=0;i<5;i++)
	{
		cout<<e[i].name<<endl;} cout<<endl; return 0;
	
}*/





//array of union
/*#include <iostream>
using namespace std;
//define a union to hold different data types
union Data{
	int intValue;
	char charValue;
	double doubleValue;
};
int main(){
	const int SIZE =5;
	Data dataArray[SIZE];
	dataArray[0].intValue=42;
	dataArray[1].charValue='A';
	dataArray[2].doubleValue=3.14;
	dataArray[3].intValue=100;
	dataArray[4].charValue='Z';
	cout<<"Array of Union"<<endl;
	for(int i=0;i<SIZE;++i){
		cout<<"Index"<<i<<":";
		if(i%3==0){
			cout<<"Integer Values:"<<dataArray[i].intValue<<endl;
		}
		else if(i%3==1){
			cout<<"Character value:"<<dataArray[i].charValue<<endl;
		}
		else{
			cout<<"Double Value:"<<dataArray[i].doubleValue<<endl;
		}
	}
}*/




//enumarator
/*
#include<iostream>
using namespace std;
main(){
	enum days{sun,mon,tues,wed,thur,fri,sat};
	days day1,day2;
	day1=sun;
	day2=fri;
	cout<<day1<<"\t"<<day2;
	if(day1>day2)
	{
		cout<<"day1 comes after day2";
	}
	else{
		cout<<"day1 comes before day2";
	}
}*/



/*
#include <iostream>
using namespace std;
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
int main(){
	week today;
	today=wednesday;
	cout<<"day"<<today+1;
	return 0;
	}
*/



/*
#include <iostream>
using namespace std;
enum seasons{spring=34,summer=4,autumn=9,winter=32
};
int main(){
	seasons s;
	s=summer;
	cout<<"summer="<<s<<endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
enum color{
	black,
	blue,
	red
};
int main(){
	color obj=blue;
	cout<<obj;
	return 0;
}
*/

//#include <iostream>
//using namespace std;
//enum color{
//	black=1,
//	blue,
//	red
//};
//int main(){
//	color obj=blue;
//	cout<<obj;
//	return 0;
//}



/*

#include<iostream>
using namespace std;
inline int Max(int x,int y){
	return(x>y)?x:y;
}
int main(){
	cout<<"Max(20,10)"<<Max(20,10)<<endl;
	cout<<"Max(0,200)"<<Max(0,200)<<endl;
	cout<<"Max(100,1010)"<<Max(100,1010)<<endl;
	return 0;
}*/








/*
#include <iostream>
using namespace std;
class operation
{
	int a,b,add;
	public:
		void get(){
			cout<<"entre first value:";
			cin>>a;
			cout<<"enter the second value:";
			cin>>b;
		}
		void sum();
}s;
inline void operation::sum(){
	add=a+b;
	cout<<"addition of two numbers:"<<a+b;
}
int main(){
	cout<<"program using inline function is";
	s.get();
	s.sum();
	return 0;
}*/




//
//#include <iostream>
//using namespace std;
//int square(int s){
//	return s*s;
//}
//int main(){
//	cout<<"enter number to compute it's square:5"<<endl;
//	cout<<"square is:"<<square(5)<<endl;
//	return 0;
//	
//}

/*
#include <iostream>
#include <string.h>
using namespace std;
class student
{
	private:
	int rollno;
	char name[10];
	int marks;
	public:
		static int objectCount;
		student()
		{
			objectCount++;
		}
		void getdata(){
			cout<<"enter roll no:"<<endl;
			cin>>rollno;
			cout<<"enter name:"<<endl;
			cin>>name;
			cout<<"entr marks:"<<endl;
			cin>>marks;
		}
		void putdata(){
			cout<<"enter roll no:"<<endl;
			cout<<"name= "<<name<<endl;
			cout<<"marks= "<<marks<<endl;
			cout<<endl;
		}
};
int student::objectCount=0;
int main(void){
	student s1;
	s1.getdata();
	s1.putdata();
	student s2;
	s2.getdata();
	s2.putdata();
	student s3;
	s3.getdata();
	s3.putdata();
	cout<<"total= "<<student::objectCount<<endl;
	return 0;
	
}*/





/*

#include <iostream>
using namespace std;
class GFG{
    private:
    int private_var;
    int protected_var;
    public:
    GFG(){
        private_var = 10;
        protected_var = 99;
    }
    friend class F;
};
class F{
    public:
    void display (GFG& t){
        cout<<"Value: "<<t.private_var<<endl;
        cout<<"Value: "<<t.protected_var<<endl;

    }
};
int main(){
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}*/







/*
#include<iostream>
using namespace std;
int main(){
    int x = 11;
    int z = 67;
    int &y = x;
    int &g = z;
    return 0;
}
*/




/*
#include <iostream>
using namespace std;
struct profile{
    int id;
};
struct emp{
    profile p;
};
int main(){
    emp e;
    int &ref = e.p.id;
    ref =34;
    cout<<e.p.id<<endl;
}
*/



//
//#include <iostream>
//using namespace std;
//void swap(int *x, int *y){
//    int temp;
//    temp =*x;
//    *x =*y;
//    *y = temp;
//
//}
//int main(){
//    int a = 10;int b=20;
//    swap (&a,&b);
//    cout<<"a: "<<a<<endl;
//    cout<<"b: "<<b<<endl;
//    return 0;
//}
//


/*
#include <iostream>
using namespace std;
class A {
    int x;
    public:
    void getdata(){
        // size = n;
        // arr = new int [size];
        cout<<"\nEnter the value of x: "<<endl;
        // for[int i=0;i<size;i++]{
        cin>>x;

        }
        void showdata(){
            cout<<"\nEntered value is: "<<x<<endl;
        }
    };
    int main(){
        A obj1;
        A*ptr;
        ptr = &obj1;
        ptr->getdata();
        ptr->showdata();
        (*ptr).getdata();
        (*ptr).showdata();
    }

*/

//
//#include <iostream>
//using namespace std;
//class X{
//    private:
//    int a;
//    public:
//    void Set_a(int a){
//        this->a=a;
//    }
//    void Print_a(){
//        cout<<"a="<<a<<endl;
//
//    }
//};
//int main(){
//    X xobj;
//    int a = 5;
//    xobj.Set_a(a);
//    xobj.Print_a();
//    
//}



/*
#include <iostream>
using namespace std;
int main(){
	int n[10];
	for (int i=0;i<10;i++)
	{
		n[i]=0;
	}
	cout<<"element"<<"\t value"<<endl;
	for(int i=0;i<10;i++){
		cout<<i<<"\t"<<n[i]<<endl;
	}
}
*/


/*
#include <iostream>
using namespace std;
int main(){
	int a[100],i,n,k,item;
	cout<<"how many no. to store in array";
	cin>>n;
	cout<<"enter the number";
	for(i=0;i<n-1;i++){
		cin>>a[i];
		cout<<"enter the no. and its position";
		
	}
	cin>>item>>k;
	k=k-1;
	for(i=n-1;i>=k;i--)
	{
		a[i+1]=a[i];
		
	}
	cout<<"contents of the array"<<endl;
	for (i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}

*/

/*
#include <iostream>
#include <string.h>
using namespace std;
//int main()
//{
//	ofstreamf out;
//	fout.open("country.txt");
//	fout<<"india\n";
//	fout<<"USA\n";
//	fout<<"UK\n";
//	fout.close();
//	fout.open("capital.txt");
//	fout<<"Delhi\n";
//	fout<<"London\n";
//	fout.close();
//}
int main(){
	const int n=80;
	char s[n];
	ifstream fin;
	fin.open("country");
	while(fin)
	{
		fin.getline(s,n);
		cout<<s;
	}
	fin.close();
	fin.open("capital");
	while(fin)
	{
		fin.getline(s,n);
		cout<<s;
	}
	fin.close();
}
*/












//
//
//#include<iostream>
//#include<fstream.h>
//using namespace std;
//int main(){
//	char s[30];
//	ofstream fileout;
//	ifstream file;
//	fileout.open("hello",ios::out);
//	fileout<<"hello word";
//	file.close();
//	file.open("hello",ios::in|ios::out);
//	cout<<file.tellg();
//	cout<<file.tellp();
//	file.seekp(6);
//	file.seekg(6);
//	cout<
//		
//	
//}


//#include<iostream>
//
//using namespace std;
//class complex
//{
//	int x,y;
//	public:
//		complex()
//		{x=10; y=20;
//		}
//		complex(int a,int b){x=a;y=b;}
//		complex operator +(complex c)
//		{
//			complex temp;
//			temp.x=x+c.x;
//			temp.y=y+c.y;
//			return (temp);
//		}
//		void show()
//		{cout<<x<<"+i"<<y;
//		}
//};
//int main()
//{complex
//c1(2,3),c2(4,5),c3;
//c3=c1+c2;
//c3.show();
//}






#include <iostream.h>
class M{
	protected:
		int m;
	public:
		void get_m(int);
};
class N
{
	protected:
		int n;
	public:
		void get_n(int);
};
class P:publicM,publicN
{
	public:
		void display(void);
};
voidM::get_m(intx)
{m=x;
}
voidN::get_n(int y)
{n=y;
}
voidP::display(void)
{
	cout<<"m="
}
class test: public student
{
	protected:
		float sub1,
}






























