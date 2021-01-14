#include<bits/stdc++.h>
using namespace std;
void print(int n){
	///Base case
	if(n==0){
		return;
	}

	///recursive case
	cout<<n<<endl;

	///calculation case
	print(n-1);
	return;
}

int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n;
		cin>>n;
		print(n);

	return 0;
}