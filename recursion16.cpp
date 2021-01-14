///print a string 
#include<bits/stdc++.h>
using namespace std;
void print(char a[]){
	///base
	if(a[0]=='\0') return;

	///recursive
	cout<<a[0];
	print(a+1);
}

void revPrint(char a[]){
	///base
	if(a[0]=='\0') return;

	///recursive
	revPrint(a+1);
	cout<<a[0];
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		char a[] = "abcd";
		print(a);
		cout<<endl;
		revPrint(a);
	return 0;
}
