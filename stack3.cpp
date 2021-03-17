///generic dynamic stack class(can store int,char,double,float,bool)
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack{
private:
	T *arr;
	int nextIndex=0,capacity;
public:
	Stack(){
		arr = new T[5];
		capacity = 5;
	}
	void push(T a){
		if(nextIndex==capacity){
			capacity = capacity*2;
			T *newArray = new T[capacity];
			for(int i=0; i<capacity/2;i++){
				newArray[i]=arr[i];
			}
			delete[]arr;
			arr = newArray;
		}
		arr[nextIndex]=a;
		nextIndex++;
		return;
	}
	void pop(){
		if(nextIndex<0){
			cout<<"Stack underflow"<<endl;
			return;
		}
		nextIndex--;
	}
	T top(){
		if(nextIndex==0){
			return 0;
		}
		return arr[nextIndex-1];
	}
	int size(){
		return nextIndex;
	}
	bool isEmpty(){
		if(nextIndex==0){
			return 1;
		}
		return 0;
	}

};
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Stack<double> ob1;
		ob1.push(1.3);
		ob1.push(1.32);
		ob1.push(1.33);
		ob1.push(1.34);
		cout<<ob1.top()<<endl;
		
		Stack<char> ob2;
		ob2.push('a');
		ob2.push('b');
		cout<<ob2.top()<<endl;
	return 0;
}