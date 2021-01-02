#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	//formulae nth fibonaci number = (n-1) + (n-2)
	
	//base case
	if(n==0) return 0;
	if(n==1) return 1;

	//assumption
	int smallOutput1 = fib(n-1);
	int smallOutput2 = fib(n-2);

	//calculation
	return smallOutput1 + smallOutput2;
}
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n;
		cin>>n;
		int res = fib(n);
		cout<<res;
	return 0;
}
