// making dynamic array class with basic functionality.

#include<bits/stdc++.h>
using namespace std;
class arrayClass{
	int *data;
	int nextIndex,capacity;
public:
	arrayClass(int n){     //paramterized constructor
		data = new int[n];
		nextIndex = 0;
		capacity = n;
	}
	arrayClass(){         //simple constructor
		nextIndex = 0;
		capacity = 5;
		data = new int[capacity];
	}
	arrayClass(arrayClass const &ob1){  // here we have used const reference as we dont wont to call copy constructor otherwise we will have infintite loop
		capacity = ob1.capacity;
		nextIndex = ob1.nextIndex;
//		data = ob1.data; // this is shallow copy
		
		// process of deep copy
		data = new int[ob1.capacity];
		for(int i=0; i<ob1.nextIndex; i++){
			data[i] = ob1.data[i];
		}
	}
	void operator=(arrayClass const &ob1){
		capacity = ob1.capacity;
		nextIndex = ob1.nextIndex;
//		data = ob1.data; // this is shallow copy
		
		// process of deep copy
		data = new int[ob1.capacity];
		for(int i=0; i<ob1.nextIndex; i++){
			data[i] = ob1.data[i];
		}	
	}
	void addElement(int element){
		if(nextIndex == capacity){
			int *a = new int[capacity * 2]; // initalize array with double capacity
			for(int i = 0; i < capacity; i++){
				a[i] = data[i]; // copy data to new array
			}			
			delete []data;
			data = a; // we are pointing data to 'a' address. 'a' is not recognized out of this 'if' scope 
			capacity *= 2; // update capacity
		}
		data[nextIndex] = element;
		nextIndex++;
	}
	void addElement(int element, int index){
		if(index < nextIndex){
			data[index] = element; // for this case we dont need to update nextIndex so we can overwrite it
		}
		else if(index == nextIndex){
			addElement(element);  // for this case we need to update nextIndex so we call addElement again
		}
		else{
			return;
		}
	}
	int  getElement(int index) const{
		if(index >=0 && index < nextIndex){
			return data[index];
		}
		else{
			return -1;
		}
	}
	int getCapacity() const{
		return capacity;
	}
	void display() const{ //it qualifies for const function as it is just returnig the values of current object and not changing the values of current object
		for(int i=0;i<nextIndex;i++){
			cout<<data[i]<<" ";
		}
		cout<<"\n";
	}

};
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		arrayClass ob1;
		ob1.addElement(10);
		ob1.addElement(20);
		ob1.addElement(30);
		ob1.addElement(40);
		ob1.addElement(50);
		ob1.addElement(60);
		cout<<"Capacity ob1 = "<<ob1.getCapacity()<<endl;
		ob1.display();
		
		arrayClass ob2(ob1); //inbuilt copy constructor does shallow copy
		ob1.addElement(100,0); // as we have done shallow copy both array are pointing towards same array
		cout<<"Capacity ob2 = "<<ob2.getCapacity()<<endl;
		ob2.display(); // note because of inbuilt copy constructor value changed in ob1 is also changed in ob2
		ob1.display(); 

		arrayClass ob3;
		ob3 = ob1; // note copy assignment operator also uses shallow copy
		ob1.addElement(1000,0); // so both ob1 & ob3 are pointing towards same array
		cout<<"Capacity ob3 = "<<ob3.getCapacity()<<endl;
		ob3.display();
		ob1.display();

		arrayClass ob4(10);  //making dynamic allocated array of our own size
		cout<<"Capacity ob4 = "<<ob4.getCapacity()<<endl;

	return 0;
}
