/*Constructer are basically like a function but used
  only on the time of object declaration.Thier name
  is fixed as the class name and we cannot give any
  random name to them. In the belo example we will
  see basic default constructors and diffrent poly
  of constructors */

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
class xyz{
		private:
			int x,y,z;
		public:
			xyz()      //constructer without parameter
			{
				cout<<"\nNO PARAMETER PASSED";
				x=0;
				y=1;
				z=2;
			}
			xyz(int a)  //constructer with parameter (polymorphism)
			{
				cout<<"\nSINGLE PARAMETER";
				x=a;
				y=1;
				z=2;
			}
			xyz(int a, int b)      //polymorphism 2
			{
				cout<<"\nDOUBLE PARAMETER";
				x=a;
				y=b;
				z=2;
			}
			xyz(int a, int b, int c)   //polymorphism 3
			{
				cout<<"\nTRIPLE PARAMETER";
				x=a;
				y=b;
				z=c;
			}
			void put()
			{
				cout<<"\nX= "<<x;
				cout<<"\nY= "<<y;
				cout<<"\nZ= "<<z;
			}
			~ xyz() //destructor
			{
				cout<<"\nDESTRUCT";
			}
		};
void main()
{
	clrscr();
	class xyz ob1;//constructor without para (default)
	ob1.put();
	class xyz ob2(10);  //constructer poly 1
	ob2.put();
	class xyz ob3(10,11); //constructer poly 2
	ob3.put();
	class xyz ob4(10,11,12);  //constructer poly 3
	ob4.put();
	getch();
}