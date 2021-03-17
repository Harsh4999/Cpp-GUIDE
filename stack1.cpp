///stack intro basic class creation and implementation using array
#include<bits/stdc++.h>
using namespace std;
class Stack{
	private:
		int *arr;
		int nextIndex=0,capacity;
	public:
		Stack(){ ///default constructor which will make stack of size 5
			arr = new int[4];
			capacity = 4;
		}

		Stack(int cap){ ///default constructor which will make stack of size cap
			arr = new int[cap];
			capacity = cap;
		}

		void push(int a){
			if(nextIndex==capacity){
				cout<<"Stack is full";
				return;
			}
			arr[nextIndex] = a;
			nextIndex++;
			return; 
		};
		
		void pop(){
			if(nextIndex==0){
				cout<<"Stack is empty";
				return;
			}
			nextIndex--; ///here we are just moving pointer to the number we want to delete and in future when the indexed is pushed it is overwritten
			return;
		};
		
		int top(){ ///it will return the topmost element present in the stack as its a LIFO data structure
			if(nextIndex==0){ ///check if elements are present or not
				return 0;
			}
			return arr[nextIndex-1]; ///if present send the element else return 0 
		};

		int size(){  ///it will return number of elements in the stack
			return nextIndex;
		};

		bool isEmpty(){
			return nextIndex==0;  ///it will return true or false if value of NI is 0 then stack will be empty so return true else false
		};
};
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Stack ob1(3);
		ob1.push(2);
		ob1.push(3);
		cout<<ob1.top()<<endl;
		cout<<ob1.size()<<endl;
		ob1.pop();
		ob1.pop();
		cout<<ob1.size()<<endl;
		ob1.push(3);
		ob1.push(3);
		ob1.push(3);
		ob1.pop();
		ob1.pop();
		ob1.pop();
		ob1.pop();
	return 0;
}