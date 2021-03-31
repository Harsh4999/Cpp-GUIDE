#include<bits/stdc++.h>
using namespace std;

class cc{
	private:
		int a,b;
	public:
		cc(int a,int b){
			this->a = a;
			this->b = b;
		};
		cc operator + (cc const &c2){
			cc c3(1,1);
			c3.a = a+c2.a;
			c3.b = b+c2.b;
			return c3;
		};
		cc operator * (cc const &c2){
			cc c3(1,1);
			c3.a = (a*c2.a - b*c2.b);
			c3.b = (a*c2.b + b*c2.a);
			return c3;
		};
		void display(){
			cout<<a<<"+"<<b<<"i"<<endl;
		};
};

int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		class cc c1(3,4);
		class cc c2(5,1);
		class cc c4(1,1);
		c4 = c1 * c2;
		c4.display();
		c4 = c1+c2;
		c4.display();
	return 0;
}
