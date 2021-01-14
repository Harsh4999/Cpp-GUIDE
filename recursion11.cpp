///find the first index of an element
#include<bits/stdc++.h>
using namespace std;
///without iterator
int find(int a[],int n,int s,int k){
	///base
	if(n==0) return -1;

	///recursive
	if(a[0]==k){
		return s-n;
	}
	int sa =find(a+1,n-1,s,k);

	///calc
	return sa;
}
///with iterator i
int find1(int a[],int n,int k,int i){
	///base
	if(i==n) return -1;

	///recursive
	if(a[i]==k) return i;
	int sa =find1(a,n,k,i+1);

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
		int s=n;
		int j = find(a,n,s,k);
		if(j==-1){
			cout<<"not found";
		}else{
			cout<<"Found at = "<<j;
		}
	return 0;
}