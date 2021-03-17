////generic stack implementation using linked list
#include<bits/stdc++.h>
using namespace std;
template<typename T> ///using templates for generic Linked list
class Node{
public:
	T data;
	Node<T> *next;
	Node(T a){
		data = a;
		next = NULL;
	}
};

template<typename T> 
class Stack{
private:
		Node<T> *head = NULL; ///using linked list for stack implementation
		int size;
	public:
		Stack(){ ///basic constructor initially stack is empty so size is 0
			size = 0;
		}
		void push(T a){
			Node<T> *n = new Node<T>(a); ///creating new node 
			n->next = head; ///inserting at head
			head = n;
			size++;///size is increased by 1
		}
		void pop(){
			if(head==NULL){ ///if stack is empty then head will be also NULL 
				cout<<"Stack is empty";
				return;
			}
			Node<T> *temp = head;
			head = head->next;
			temp->next = NULL;
			delete temp;
			size--;
		}
		int getsize(){
			return size;
		}
		bool isEmpty(){
			return size == 0;
		}
		T top(){
			if(head==NULL){
				cout<<"Stack is empty";
				return 0;
			}
			return head->data;
		}
};
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Stack<int> ob1; ///creating a generic stack implemented in Linked List
		ob1.push(1);
		ob1.push(1);
		ob1.push(1);
		ob1.push(3);
		cout<<ob1.top()<<endl;
		ob1.pop();
		cout<<ob1.top()<<endl;
	return 0;
}