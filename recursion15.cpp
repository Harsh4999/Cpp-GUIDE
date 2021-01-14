///check if array is palidrome or not
#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int s,int e){
	///base
	if(s>e) return true;

	///recursive
	if(a[s]==a[e]){
		return check(a,s+1,e-1);
	}
	
	return false;
	
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int a[] = {3,2,3,2,1};
		if(check(a,0,4)){
			cout<<"Yes";
		}else cout<<"No";
	return 0;
}