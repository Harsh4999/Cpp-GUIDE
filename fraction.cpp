#include<bits/stdc++.h>
using namespace std;
class fraction{
	private:
		int numerator,denominator;
	public:
		fraction(){
			numerator = 1;
			denominator = 1;
		};
		fraction(int numerator,int denominator){
			this->numerator = numerator;
			this->denominator = denominator;
		};
		fraction operator + (fraction f2){
			fraction f3(1,1);
			int lcm,x,y;
			lcm = denominator*f2.denominator;
			x = lcm/denominator;
			y = lcm/f2.denominator;
			numerator = numerator*x;
			f2.numerator = f2.numerator*y;
			numerator = numerator + f2.numerator;
			denominator = lcm;
			f3.numerator = numerator;
			f3.denominator = denominator;
			f3.simplify();
			return f3;
		};
		void simplify(){
			int j;
			j = __gcd(numerator,denominator);

			numerator = numerator/j;
			denominator = denominator/j;
		};
		void display(){
			cout<<numerator<<"/"<<denominator;
		};

};

	
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		class fraction f1(10,2);
		class fraction f2(15,4);
		class fraction f4;
		f4 = f1 + f2;
		f4.display();
	return 0;
}
