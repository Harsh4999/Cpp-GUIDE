///print ith node , print ListLength, insert ith node, delete ith node
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

Node* Input(){
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;

	while(data != 0){
		Node *n = new Node(data);
		if(head == NULL){
			head = n;
			tail = n;
		}else{
			tail->next = n;
			tail = n;
		}
		cin >> data;
	}
	return head;
}
void print(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
int ListLength(Node *head){
	Node *temp = head;
	int l=0;
	while(temp != NULL){
		l++;
		temp = temp->next;
	}
	return l;
}
void PrintIthNode(Node *head, int n){ ///time O(i)
	int c=0;
	if(n<0){
		cout<<-1<<endl;
		return;
	}else{
		Node *temp = head;
		while(temp != NULL){
			if(c==n){
				cout<<temp->data<<endl;
				return;
			}
			temp = temp->next;
			c++;
		}
		cout<<-1<<endl;
	}
	return;
}
Node* insertAtIthPosition(Node *head,int d,int i){ ///time O(i)
	int c=0;
	if(i<0){ ///invalid index 
		return head;
	}
		Node *temp = head;
		Node *ptr =new Node(d); ///creating new node
		if(i==0){ ///case 1 to handl as if we do i-1 then index will goto negative so here we insert a node at start
			ptr->next = head; ///inserting address of head at start
			head = ptr; ///updating head
			return head;
		}
		while(c<i-1 && temp != NULL){ ///this condition will stop LL before 1 index where we want to insert
			c++;
			temp=temp->next;
		}
		if(temp){ ///if its a valid index
			ptr->next = temp->next; ///if yes we update new node next by providing this nodes next
			temp->next = ptr; ///we point this node next to new pointer
			return head;
		}
	return head;
}

/// order to avoid memory leaks 1) store address of the node to delete in a new node
///                             2) point the node and skip the ith node
///                             3) isolate the node to delete by pointing it towards NULL
///                             4) then delete the node
Node* deleteIthNode1(Node* head,int i){  ///solution without memory leak
	int c=0;
	if(i<0){
		return head;
	}

	Node *temp = head;
	if(i==0 && head){  ///cheking if head is not null 
		Node *newhead = head->next; ///first storing the new head address
		head->next = NULL; ///isolating the ith node
		delete head; ///delete the head
		return newhead;
	}
	while(c<i-1 && temp != NULL){ ///going to i-1 node 
		c++;
		temp = temp->next;
	}
	if(temp && temp->next != NULL){ //this will avoid invalid index above length of LL
		Node *temp1 = temp->next; ///storing address of node to delete
		temp->next = temp1->next;
		temp1->next = NULL;///isolating the node to delete
		delete temp1; 
		return head; ///Note this solution has memory leak
	}

	return head;
}


int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Node *head = Input();
		//print(head);
	//	int l = ListLength(head);
	//	cout<<"Length = "<<l<<endl;
		//cin>>n;
		//PrintIthNode(head,n);
	//	head = insertAtIthPosition(head,40,5);
		head = deleteIthNode1(head,4);
		print(head);
	return 0;
}