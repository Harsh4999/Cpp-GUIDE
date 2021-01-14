///count digits time complexity O(log(n)) as we are deviding 
#include<bits/stdc++.h>
using namespace std;
int count(int n){
	///base
	if(n==0){
		return 0;
	}

	//recursive
	int sa = count(n/10) ;

	///calc
	return sa + 1;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int a =count(41803);
		cout<<a;
	return 0;
}