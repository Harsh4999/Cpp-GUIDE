/// 2 types of input a) at head , b) at tail ,print nodes
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next;

	Node(int data){
		this->data = data;
		next = NULL;
	}
};
Node* InputAtTail(){ ///straight linked list
	int data;
	cin>>data;

	Node *head = NULL; ///initially head will be NULL
	Node *tail = NULL; ///initially tail will be NULL

	while(data != 0){ ///if data is 0 then terminate the loop

		Node *n = new Node(data); ///dynamically create new node 

		if(head == NULL){ ///if head is NULL then its first node and we will store first node address into the head and tail
			head = n;  ///first node address
			tail = n; ///as there is only one node tail = head
		}else{
			tail->next = n; ///storing new node address into previous node
			tail = n; ///switching to new node as tail node
		}

		cin>>data;
	}
	return head; ///finally returning head
}
Node* InputAtHead(){ ///reverse linked list
	int data;
	cin>>data;

	Node *head = NULL; ///initially head will be NULL
	Node *tail = NULL; ///initially tail will be NULL

	while(data != 0){ ///if data is 0 then terminate the loop

		Node *n = new Node(data); ///dynamically create new node 

		if(head == NULL){ ///if head is NULL then its first node and we will store first node address into the head and tail
			head = n;  ///first node address
			tail = n; ///as there is only one node tail = head
		}else{
			n->next = head; ///storing new node address into head node
			head = n; ///switching to new node as head node
		}

		cin>>data;
	}
	return head; ///finally returning head
}
void print(Node *&head){  ///passing head by reference as we are just copying its address in temp pointer
	Node *temp = head; ///using temp pointer to iterate over linked list
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		///statically initialize node
		Node n1(1);
		Node *head = &n1; //storing address of the first node in a pointer of class Node of 8 bytes
		Node n2(2);
		Node n3(3);

		///dynamically initialize node
		Node *n4 = new Node(4);
		Node *n5 = new Node(5);
		Node *n6 = new Node(6);

		n1.next = &n2; //linking the first node to the second
		n2.next = &n3; //linking the second node to the third

		n3.next = n4;  ///linking static node to dynamic

		n4->next = n5; //putting in n5 as address not address of n5 as n5 is in stack memory and we want to access heap memory
		n5->next = n6; //storing n6 address in n5
		///calling a print function
		//print(head);

		///input function
		Node *head1 = InputAtTail();
		print(head1);
		head1 = InputAtHead();
		print(head1);
	return 0;
}