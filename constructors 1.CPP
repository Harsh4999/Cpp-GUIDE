/* Here we will see constructors in more depth and also
   see how we can use them to copy one object to other
   using copy construct feature. Programm also covers
   diffrent way to call construct Implicit & Explicit. */
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
class xyz{
		private:
			int x,y,z;
		public:
			xyz()     //default constructor
			{
				cout<<"\nNO PARAMETER CONSTRUCT";	//simple constructer
				x=0;
				y=0;
				z=0;
			}
			xyz(xyz &tob)
			{                                         //copy constructer copying object
				cout<<"\nCOPY CONSTRUCT";
				x=tob.x;
				y=tob.y;
				z=tob.z;
			}
			xyz(int i, int j, int k);   //declaraion of constructer with 3 para
		       void  print()
		       {
				cout<<"\nX = "<<x;
				cout<<"\nY = "<<y;
				cout<<"\nZ = "<<z;
		       }
		};
xyz::xyz(int i, int j, int k)  //constructer defination outside class
{
	cout<<"\nPASSING WITH 3 PARA ";
	x=i;
	y=j;
	z=k;
}
void main()
{
	clrscr();
	class xyz ob1(10,11,12); //implicit call
	ob1.print();
	class xyz ob2 = xyz(13,14,15); //explicit call
	ob2.print();
	xyz(16,17,18).print(); //temporary instance
	class xyz ob3(ob1); //copy construct
	ob3.print();
	cout<<"\nNOT USING COPY CONSTRUCT";
	class xyz ob4;  //first no parameter construct will be used
	ob4=ob2;  //not copy construct just taking value from ob2
	ob4.print();
	getch();
}
