///staircase problem find number of ways to reach a number N jumps allowed on 1,2,3 eg: N=3 ans: 4 ways [(1,1,1),(2,1),(1,2),(3)]
#include<bits/stdc++.h>
using namespace std;
int numways(int n){
	///base 
	if(n==0 || n==1){
		return 1;
	}
	if(n==2){ ///2 is a base as (n-3) = -1 and in negative it will go to infinity
		return 2;
	}

	///recursion
	int sa = numways(n-1)+numways(n-2)+numways(n-3);

	///return 
	return sa;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		cout<<numways(4);
	return 0;
}
