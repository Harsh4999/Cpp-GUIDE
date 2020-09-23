#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int y=40; //global variable
class stud{                   //global class
		private:
			int roll;
			char name[20];
		public:
			int y;
			void scan();
			void print();
	  }ob;//global object
void main()
{
	clrscr();
	class abc{  //local class
			private:
				int n;
			public:
				int fun()
				{
					int t=9;
					return t;
				}

		  }on;   //local object
	int w;
	w=on.fun();
	int y; //local variable

	ob.y=10;  //global object's public member
	ob.scan();
	ob.print();
	y=30; //LOCal variable
	cout<<"\nLOCAL Y = "<<y;
	::y=100;
	cout<<"\nGlobal y variable = "<<::y;//global variable
	cout<<"\nLOCAL OBJECT FUNCTION = "<<w; //local object function
	getch();
}
void stud :: scan()
{
	cout<<"\nENTER ROLL ";
	cin>>roll;
	cout<<"\nENTER NAME ";
	gets(name);
	clrscr();
}
void stud:: print()
{
	cout<<"\nROLL = "<<roll;
	cout<<"\nNAME = "<<name;
	cout<<"\nGLOBAL Y = "<<::y;
	cout<<"\nOB.y = "<<ob.y;
}

