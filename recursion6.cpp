#include<bits/stdc++.h>
using namespace std;
int countzero(int n){
	///base
	if(n==0) return 0;

	///recursive
	int sa = countzero(n/10);

	///calc
	if(n%10==0){
		return sa+1;
	}else return sa;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		cout<<countzero(1010);
	return 0;
}