///implementation of queue using array
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue{
T *a;
int cap;
int size=0,nextIndex=0,frontIndex=-1;
public:
	Queue(int d){
		cap =d;
		a = new T[cap];
	}
	void insert(T d){
		if(size==cap){
			cout<<"Queue full"<<endl;
			return;
		}
		a[nextIndex] = d;
		nextIndex = (nextIndex + 1)%cap;
		if(frontIndex == -1){
			frontIndex = 0;
		}
		size++;
	}
	void remove1(){
		if(isEmpty()){
			cout<<"Queue is empty!"<<endl;
			return;
		}
		frontIndex = (frontIndex + 1)%cap;
		size--;
		if(size==0){
			nextIndex =0;
			frontIndex = -1;
		}
	}
	int getSize(){
		return size;
	}
	T front(){
		if(isEmpty()){
			cout<<"Queue is Empty"<<endl;
			return 0;
		}
		return a[frontIndex];
	}
	bool isEmpty(){
		return size==0;
	}
};
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Queue<int> obj(5);
		obj.insert(10);
		obj.insert(12);
		obj.insert(11);
		obj.insert(11);
		obj.insert(11);
		obj.insert(11);
		obj.insert(11);
		obj.remove1();
		obj.remove1();
		cout<<obj.front()<<endl;
		cout<<obj.getSize()<<endl;
	return 0;
}