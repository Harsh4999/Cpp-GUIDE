///find the last element in the array 
#include<bits/stdc++.h>
using namespace std;

///iterating from right to left as we have to find the element from last
int find1(int a[],int n,int k){
	///base
	if(n==0) return -1;

	///recursive
	if(a[n-1]==k){
		return n-1;
	}
	int sa = find1(a,n-1,k);    

	///calc
	return sa;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int k;
		cin>>k;
		int j = find1(a,n,k);
		if(j==-1){
			cout<<"No match found";
		}else{
			cout<<"Match found at = "<<j;
		}

	return 0;
}