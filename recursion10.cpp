///find elment in  array
#include<bits/stdc++.h>
using namespace std;
///searching left to right
bool fa(int a[],int n,int i,int key){
	///base
	if(i==n) return false;

	///recursive
	if(a[i]==key){
		return true;
	}
	bool sa = fa(a,n,i+1,key); ///not cutting array
	///calc
	return sa;
}
///itereating over array straight searching left to right
bool fa1(int a[],int n,int key){
	///base
	if(n==0) return false;

	///recursive
	if(a[0]==key){
		return true;
	}
	bool sa = fa1(a+1,n-1,key); ///cutting array from left 

	///calc
	return sa;
}
///iterating over array reverse searching right to left
bool fa2(int a[],int n,int key){
	///base
	if(n==0) return false;

	///recursive
	if(a[n-1]==key){
		return true;
	}
	bool sa = fa2(a,n-1,key); ///cutting array from right

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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int key;
		cin>>key;
		if(fa2(a,n,key)){
			cout<<"found";
		}else{
			cout<<"not found";
		}
	return 0;
}
