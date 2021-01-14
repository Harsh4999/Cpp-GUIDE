#include<bits/stdc++.h>
using namespace std;
double gsum(int k){
	///base case
	if(k==0) return 1;

	///recursive case
	double sa = gsum(k-1);

	///calc
	double ld = 1.0/(pow(2,k)); // we write here 1.0 as double/int = double and if we write 1 then int/int = int
	return sa+ld;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		cout<<gsum(3); // input K
		///gsum = 1 + 1/2 + 1/2^2 + 1/2^3 + ..... 1/2^k
	return 0;
}