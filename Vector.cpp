#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		vector<int> v; // first way to initialize static vector
		vector<int> *v1 = new vector<int>(); // initializing dynamic vector
		vector<int> v2(10); // second way to initialize static vector
		cout<<"Using capacity = "<<v.capacity()<<endl; //checking available space in the vector it returns total number of space
		v.push_back(10); //inserting an elemnt from behind
		v.push_back(20);
		v.push_back(30);
		v.pop_back(); //Deleting an element from bhing
		for(int i=0; i<v.size(); i++){
			cout<<v[i]<<" ";
		}

		cout<<"\n"<<"Using at 1 = "<<v.at(1); //using at function asd it is more safer than []
		cout<<"\n"<<"Using capacity = "<<v.capacity(); 
		cout<<"\n"<<"Using size = "<<v.size()<<endl; //using size function to check the number of element present in the vector

		v.push_back(2);
		v.push_back(1);
		v.push_back(8);
		sort(v.begin(), v.end()); //using inbuilt sort function to sort the vector giving start and end
		for(int i=0; i<v.size(); i++){
			cout<<v[i]<<" ";
		}		
	return 0;
}
