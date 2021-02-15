/// remove nth node from end of the list, merge 2 sorted LL , merge-sort on LL
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
Node* removeKthNodeFromEnd(Node* head, int k){
	Node* ptr1 = head; ///starting ptr1 from head
	Node* ptr2 = head; ///starting ptr2 from head
	while(k--){
		ptr2 = ptr2->next; ////making gap between both pointers of k nodes
	}
	if(ptr2==NULL){ ///this means if k == legnth of LL so we have to delete head so we return head->next
		return ptr1->next; ///basically we are deleting head
	}
	while(ptr2->next != NULL){
		ptr2=ptr2->next; ///moving 1 pointer at a time simultaneously
		ptr1 = ptr1->next;
	}
	ptr2 = ptr1->next; ///making ptr2 == kth node
	ptr1->next = ptr1->next->next; ///delteting kth node address
	delete ptr2; ///deleting kth node
	return head; ///returning new head
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
Node* mergeSort1(Node* head1 ,Node* head2){ ///merge 2 sorted LL T =  O(n1 + n2) S =  O(1)
	if(head1==NULL){ ///if one LL is empty then return other
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	Node* head =NULL;
	Node* tail =NULL;
	if(head1->data <= head2->data){ ///finding head value to start from
		head = head1;
		tail = head1; ///initially both head and tail are same
		head1 = head1->next;
	}else{
		head = head2;
		tail = head2;
		head2 = head2->next;
	}

	while(head1 && head2){
		if(head1->data<=head2->data){
			tail->next = head1; ///inserting at tail
			head1 = head1->next;
			tail = tail->next;
		}else{
			tail->next = head2;
			head2 = head2->next;
			tail = tail->next;
		}
	}
	if(head1){
		tail->next = head1;
	}else{
		tail->next = head2;
	}
	return head;
}

Node* mergeSort2(Node* head1, Node* head2){ ///mergesort recursively
	///base
	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;

	///recursive
		Node* head = NULL;
	if(head1->data <= head2->data){
		head = head1;
		head->next = mergeSort2(head1->next,head2);
	}else{
		head = head2;
		head->next = mergeSort2(head1,head2->next);
	}
	return head;
}

Node* mergeSort(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* slow = head; 
	Node* fast = head->next;
	while(fast && fast->next){ ///first finding LL mid point by slow and fast pointer approach
		slow = slow->next;
		fast = fast->next->next;
	}
	Node* n = slow->next; ///now breaking the LL into 2 halves so our slow->next is our 2nd half head
	slow->next = NULL; ///pointing slow->next to null to mark end of 1st LL
	Node* a = mergeSort(head); //calling and dividing the LL further and storing the new head into a 
	Node* b = mergeSort(n); //calling and dividing the LL further and storing the new head into b
	head = mergeSort2(a,b); //finally we have 2 sorted ll a & b so calling function mergeSort2 to merge 2 sorted ll
	return head; ///returning the updated head
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		Node *head = Input();
		print(head);
	//	head = removeKthNodeFromEnd(head,5);*/
	//	Node *head1 = Input();
	//	Node *head2 = Input();
	//	print(head1);
		cout<<endl;
	//	print(head2);
	//	Node *head3 = mergeSort2(head1,head2);
	//	print(head3);
		head = mergeSort(head);
		print(head);
	return 0;
}