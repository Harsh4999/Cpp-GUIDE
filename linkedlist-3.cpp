/// 2 types of input a) at head  ,print nodes ,find legnth recusively of LL,search in LL, Return mid of LL using slow and fast pointer search, reverse LL
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
Node* Input(){ ///straight linked list
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
void print(Node *&head){  ///passing head by reference as we are just copying its address in temp pointer
	Node *temp = head; ///using temp pointer to iterate over linked list
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int length(Node *head){ ///time complexity is O(n) & space complexity is O(n)
	///base case
	if(head==NULL){
		return 0;
	}

	///recusive case
	int sa = length(head->next);

	///calc
	return sa + 1;
}
bool searchLinkedList(Node *head, int key){ ///simple searchLinkedList1
	Node *temp = head;
	while(temp){
		if(temp->data==key){
			return true;
		}
		temp = temp->next;
	}
	return false;
}

bool searchLinkedList1(Node *head,int key){///searching using recursion 
	if(head==NULL){
		return false;
	}

	if(head->data==key){
		return true;
	}
	bool sa  = searchLinkedList1(head->next,key);
	return sa;
}
Node* returnMidOfLL(Node* head){
	int l = length(head);
	int m = l/2;
	int c = 0;
	Node* temp = head;
	while(temp){
		if(c==m){
			return temp;
		}
		c++;
		temp = temp->next;
	}
	return temp;
}
Node* returnMidOfLLSFApp(Node* head){ ///slow & fast pointer approach
	Node* slow = head; ///starting from 0
	Node* fast = head->next; ///starting from 1
	while(fast && fast->next != NULL){ ///1st condition for odd number in LL and 2nd condition for even number in LL
		slow = slow->next;///slow pointer takes only 1 jump
		fast = fast->next->next;///fast pointer takes 2 jump
	} 
	if(fast){ ///if fast is present then case is that LL has even number of node so fast stoped before NULL
		return slow->next;///as we have to return  2nd mid in even case we jump slow pointer 1 more time
	}
	return slow;///else this case if for odd LL and we return the mid
}

Node* reverseLL(Node* head){
	Node* current = head; ///starting pointer from head
	Node* previous = NULL; ///at start prev and N both are NULL
	Node* n = NULL;///used to store address for next node
	while(current){ ///if current is null then break
		n = current->next; ///1st step save current->next in n
		current->next = previous;///2nd step break the link in forward and connect it backward at previous pointer
		previous = current; ///move previous forward
		current = n;///move current forward
	}
	return previous;///return previous which are new head
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Node *head = Input();
		print(head);
		cout<<endl;
		//cout<<length(head);
		//int key;
		//cin >> key;
	/*	if(searchLinkedList1(head,key)){
			cout<<"YES";
		}else{
			cout<<"NO";
		}*/
		//Node *temp = returnMidOfLLSFApp(head);
		//cout<<temp->data<<endl;
		Node* rev = reverseLL(head);
		print(rev);

	return 0;
}