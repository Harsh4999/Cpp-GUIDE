///check number of times an element occures in an array
#include<bits/stdc++.h>
using namespace std;
void occurences(int a[],int n,int k,int& ans){
	///base
	if(n==0) return;

	
	if(a[0]==k){
		///calc
		ans++;
	}
	
	///recursive
	occurences(a+1,n-1,k,ans);
}
///without using a variable
int occurences1(int a[],int n,int k){
	///base
	if(n==0) return 0;

	///recursive
	if(a[0]==k){
		return 1+occurences1(a+1,n-1,k);
	}

	return 0 + occurences1(a+1,n-1,k);
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
		int ans = occurences1(a,n,k);
/*		occurences(a,n,k,ans);*/
		cout<<ans;
	return 0;
}
