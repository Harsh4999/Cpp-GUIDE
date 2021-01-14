///sum of array time complexity O(n)
#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int s){
	///base case
	if(s==1) return a[0];

	///recursive case
	int sa = sum(a+1,s-1); ///note here we are cutting the array by using a+1 which will decrease array by 1

	///calc
	return sa + a[0];
}

///by using iterator and not cutting array into small peices
int sum2(int a[],int s,int i){
	///base case
	if(i==s) return 0; ///when i will become to size then we know array is empty so we return  0 when i is 0 we know array is full

	///recursive
	int sa = sum2(a,s,i+1); ///note here we are passing the whole array and not cutting it we are using i-th element and adding it its like loop 

	///return 
	return sa + a[i]; ///so we return the last answer + the current index 
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<sum2(a,n,0);

	return 0;
}
