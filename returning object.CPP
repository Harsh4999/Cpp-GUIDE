/* In this program we will learn about how to return a object in a function & also use polymorphism */

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
class xyz{
		private:
			int x,y,z;
		public:
			void getdata() // Creating basic function
			{
				cout<<"\nENTER X Y Z = ";
				cin>>x>>y>>z;
			}
			void getdata(xyz tob) // using polymorphism and also passing as a parameter an object
			{
				x=tob.x;
				y=tob.y;
				z=tob.z;
			}
			void getdata(int a, int b, int c) // using polymorphism same name diffrent parameters
			{
				x=a;
				y=b;
				z=c;
			}
			xyz sum( xyz tob) // returning object and passing object function
			{
				xyz temp;
				temp.x= x+tob.x;
				temp.y= y+tob.y;
				temp.z= z+tob.z;
				return temp;
			}
			void putdata() // printing output
			{
				cout<<"\t"<<x;
				cout<<"\t"<<y;
				cout<<"\t"<<z;
			}
	};
void main()
{
	clrscr();
	xyz ob1,ob2,ob3;
	ob1.getdata(); // input of object 1 eg= { x=1, y=2, z=3}
	ob2.getdata(10,20,30); // input of object 2 = { x= 10, y= 20, z= 30 }
	ob3 = ob1.sum(ob2); // returning object and also passing object 2 = object 3 = { x= 11, y= 22, z= 33}
	cout<<"\n SUM OF X Y Z  = ";
	ob3.putdata(); // printing result
	getch();
}

