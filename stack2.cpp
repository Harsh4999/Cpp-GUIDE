///dynamic stack
#include<bits/stdc++.h>
using namespace std;
class Stack{
private:
	int *arr;
	int nextIndex=0,capacity;
public:
	Stack(){
		arr = new int[5];
		capacity = 5;
	}
	void push(int a){
		if(nextIndex==capacity){
			capacity = capacity*2;
			int *newArray = new int[capacity];
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
	int top(){
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
		Stack s;
		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		s.push(5);
		s.push(6);
		s.push(7);
		s.push(8);
		s.push(9);
		s.push(10);
		s.push(11);
		s.push(12);
		s.pop();
		cout<<s.top()<<endl;
		cout<<s.size()<<endl;
	return 0;
}