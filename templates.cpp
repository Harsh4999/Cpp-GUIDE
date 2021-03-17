///basics of template
#include<bits/stdc++.h>
using namespace std;
template <typename Z> ///syntax to declare a template variable T=temporary variable
class Pair{
	Z x; ///here when we declare a object we will mention what will be the T be replaced with
	Z y; ///the data type mentioned in declaration of object will be replaced with T
	public:
		void set(Z x, Z y){ ///setting the value of x,y
			this->x = x;
			this->y = y;
		}
		Z getx(){ ///getting the value of x,y
			return x;
		}
		Z gety(){
			return y;
		}
};

template <typename T,typename V> ///syntax to declare a template variable T=temporary variable
class Pair2{
	T x; ///type T variable
	V y; ///type V variable
public:
	void set(T x,V y){
		this->x = x;
		this->y = y;
	}
	T getx(){
		return x;
	}
	V gety(){
		return y;
	}
};
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Pair<int> ob1; ///as we have used template data type in class we need to mention what to replace T with during object creation
		ob1.set(1,2); ///int object
		cout<<ob1.getx()<<" "<<ob1.gety()<<endl;

		Pair<char> ob2; ///char object
		ob2.set('a','b');
		cout<<ob2.getx()<<" "<<ob2.gety()<<endl;

		Pair2<int,char> ob3; ///using multiple templates for diffrent variables inside a class
		ob3.set(2.73,'b');
		cout<<ob3.getx()<<" "<<ob3.gety()<<endl;
		
		Pair2<float,char> ob4;
		ob4.set(3.45,'c');
		cout<<ob4.getx()<<" "<<ob4.gety()<<endl;
	return 0;
}