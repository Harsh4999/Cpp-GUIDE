/* POLYMORPHISM its the ability to make oblject, functions etc with same
    but with diffrent parameters */


#include <stdio.h>
#include <conio.h>
#include <iostream.h>
class xyz{                    // create a global object
		private:
			int x,y,z;
		public:
			void getdata()     // creating basic function on which we will use polymorphism
			{
				cin>>x>>y>>z;
			}
			void getdata(int a)            //using polymorphism same name of function diffrent parameter
			{
				x=a;
				cin>>y>>z;
			}
			void getdata(int a, int b)   //using polmorphism same name of function but diffrent parameter
			{
				x=a;
				y=b;
				cin>>z;
			}
			void getdata(int a, int b, int c) // polimorphism same name diffrent parameter
			{
				x=a;
				y=b;
				z=c;
			}
			void putdata()
			{
				cout<<x<<"\t"<<y<<"\t"<<z;
			}
		};
void main()
{
	clrscr();
	class xyz ob;
	ob.getdata();    // input  basic function
	cout<<"\nNO PASSING = ";
	ob.putdata();    // output basic functiom
	ob.getdata(10);  // input function 1
	cout<<"\n 1 PASSING = ";
	ob.putdata();    // output 1
	ob.getdata(10,20);  // input 2
	cout<<"\n 2 PASSING = ";
	ob.putdata();    // output 2
	ob.getdata(10,20,30);   // input 3
	cout<<"\n 3 PASSING = ";
	ob.putdata();   // output 3
	getch();
}
/* BY this we conclude that when we use polymorphism we create completely
   diffrent functions with same name and all functions output will also differ.  */
