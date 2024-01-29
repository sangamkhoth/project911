/*  #include<iostream>
using namespace std;
class student
{
	
protected:
	int roll_no;
public:
	void get_no(int);
	void put_no(void);
	
};
void student::get_no(int a)
{roll_no=a;}
void student::put_no()
{
	cout<<"Roll Number is"<<roll_no;
}
class test: public student{
	protected:
		float sub1,sub2;
		public:
			void get_marks(float,float);
			void put_marks(void);
			
};
void result::display(void){
	Total=sub1+sub2;
	put_no();
	put_marks();
	cout<<"Total="<<total;
}
int main()
{
	Result student1;
	Student1.get_no(102);
	Student1.get_marks(80.0,98.5);
	Student1.displa();
	return 0;
}*/


/*
#include<iostream>
using namespace std;
class M
{
	protected:
		int x;
		public:
			void set(int a)
			{
				x=a;
			}
			
};
class N:public M

{
	public:
		void display()
		{
			cout<<"\nx:"<<x<<"accessed in drived class N";
		}
};
class O:public M

{
	public:
		void display()
		{
			cout<<"\nx:"<<x<<"accessed in drived class O";
		}
};
int main(){
	N obj1;
	O obj2;
	obj1.set(12);
	obj1.display();
	obj2.set(19);
	obj2.display();
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
class B1
{
	public:
		void show_data()
		{
			cout<<"\n In the base class1";
		}
};
class B2
{
	public:
		void show_data()
		{
			cout<<"\n In the base class2";
		}
		
};
class D:public B1,public B2
{
	public:
		
};
int main()
{
	D obj;
	obj.show_data();
}
*/
/*
#include <iostream>
using namespace std;
class Base
{
	public:
		Base(){
			cout<<"Base";
		}
};
class Derived: public Base
{
	public:
		Derived(int i){cout<<i;
		}
};
int main()
{
	Derived d2(10);
	return 0;
}
*/



/*
#include <iostream>
using namespace std;
class Base1
{
	public:
		Base1()
		{cout<<"Base1's constructor called"<<endl;
		}
};
class Base
{
	public:
		Base2()
		{cout<<"Base2's constructor called"<<endl;
		}
};
class Derived:public Base1,public Base2{
	public:
			{cout<<"Derived's constructor called"<<endl;
		}
};
int main()
{
	Derived d;
	return 0;
}
*/
/*
#include <iostream>
using namespace std;
class B
{
	protected:
		int x;
	public:
		void get_dataB()
	{
		cout<<"\n Enter value of x";
		cin>>x;
	}
};
class DB1:public virtual B
{
	protected:
		int y;
		public:
			void get_dataDB1()
			{
				cout<<"\n Enter the value of y:";
				cin>>y;
			}
};
class DB2:public virtual B
{
	protected:
		int z;
		public:
			void get_dataDB2()
			{
				cout<<"\n enter the value of z:";
				cin>>z;
			}
};
class D:public DB1,public DB2
{
	public:
		void sum()
		{
			int result;
			result=x+y+z;
			cout<<"\n result is:"<<result;
		}
};
int main()
{
	D obj1;
	obj1.get_dataB();
	obj1.get_dataDB1();
	obj1.get_dataDB2();
	obj1.sum();
	return 0;
}
*/


/*
#include <iostream>
using namespace std;
class Base1{
	public:
		Base1(){
			cout<<"Base1's destructor"<<endl;
		}
};
class Base2{
	public:
		Base2(){
			cout<<"Base2's destructor"<<endl;
		}
};
class Derived: public Base1,public Base2{
	public:
		Derived() {cout<<"Derived's destructor"<<endl;
		}
};
int main()
{
	Derived d---------------------;
	return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main()
{
	int*ptr;
	{
		int v=23;
		ptr = &v;
		cout<<"address is (inside block):"<<ptr<<"/n";
	}
	cout<<"address is(outside block):"<<ptr;
	ptr=NULL;
}
*/

/*

#include <iostream>
using namespace std;
int main(){
	int*pvalue = NULL;
	pvalue = new int;
	*pvalue = 23;
	cout<<"address where pointer is pointing before deletion :"<<pvalue<<endl;
	delete pvalue;
	cout<<"address where pointer is pointing after deletion :"<<pvalue<<endl;
	pvalue=NULL;
	cout<<"\n"<<pvalue;
	return 0;
}
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	private:
		char* str;
		public:
			string1(char*s)
			{
				int length=strlen(s);
				str=new char[length+1];
				strcpy(str,s);
				
			}
			~string1()
			{
				cout<<"Deleting str\n";
				delete[]str;
			}
			void display()
			{
				cout<<str<<endl;
			}
		};
		int main()
		{
			string1 s1("This is DMA example for string ");
			cout<<"s1=";
			s1.display();
			return 0;
			
		}
*/


/*
#include <iostream>
#include <string.h>
using namespace std;
class string1
{
private:
    char *str;

public:
    string1(char *s)
    {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    ~string1()
    {
        cout << "Deleting str\n";
        delete[] str;
    }
    void display()
    {
        cout << str << endl;
    }
};
int main()
{
    string1 s1("This is DMA example for string ");
    cout << "s1=";
    s1.display();
    return 0;
}

*/


/*

//dynamic constructor
#include<iostream>
using namespace std;
class array{
	int *arr;
	int n;
	public:
		array();
		void show_data();
		
};
array::array(){
	cout<<"\nenter size:";
	cin>>n;
	arr=new int[n];
	cout<<"\nenter the elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void array::show_data(){
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
}

int main(){
	int no_obj;
	cout<<"\nenter the no. of objects:";
	cin>>no_obj;
	array *ptr=new array[no_obj];
	for(int i=0;i<no_obj;i++){
		ptr->show_data();
		ptr++;
	}
	return 0;
}
*/			

//#include <iostream>
//
//using namespace std;
//class base{
//    public:
//    base(){
//        cout<<"Constructing base\n";
//    }
//    ~base(){
//        cout<<"Destructing base\n";
//    }
//};
//
//class derived: public base{
//    public:
//    derived(){
//        cout<<"Constructing derived\n";
//    }
//    ~derived(){
//        cout<<"Destructing derived\n";
//    }
//};
//
//int main(){
//    base *b= new derived();
//    delete b;
//    return 0;
//}

/*
#include<iostream>
using namespace std;
class BC
{
	public:
		virtual void show()
		{
			cout<<"/n show() of base class"<<endl;
		}
};
class DC:public BC
{
	public:
		void show()
		{
			cout<<"\n show() of derived class "<<endl;
		}
};
int main()
{
	BC *bptr;
	BC base;
	bptr=&base;
	cout<<"\n ------ runtime polymorphism--------------";
	cout<<"bptr points to base objects\n";
	bptr->show();//base class show is called
	//derived class
	DC derived;
	bptr=&derived;
	cout<<"bptr now points to derived objects\n";
	bptr->show();//derived class show is called
	return 0;
	
}
*/


#include <iostream>
using namespace std;

#define MAx 5
template <class Type>
Type Sum(Type A[])
{
	Type Total = 0;
	for(int i=0;i< MAX;i++)
	Total+=A[i];
	return Total;
}
template<class Type>
void read(Type A[])
{
	for (int i=0;i<MAX;i++)
	cin>>A[i]
}
int main()
{
	int Array[MAX];
	float Array1[MAX];
	cout<<"\n Enter the integer array elements:";
	read<int>(Array);
	cout<<"\n sum of elements="<<sum<int>(Array);
	cout<<"\n Enter the float array elements:";
	read<float>(Array1);
	cout<<"\n sum of elements="<<sum<float>(Array1);
}



































































