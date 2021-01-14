#include<bits/stdc++.h>
using namespace std;
int mul(int m, int n){
	///base
	if(n==1) return 1;

	///recursive
	int sa = mul(m,n-1);

	///calc
	return sa + m;
}

int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		cout<<mul(2,4);
	return 0;
}