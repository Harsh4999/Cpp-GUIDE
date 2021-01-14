///convert string to integer
#include<bits/stdc++.h>
using namespace std;
int toi(char a[],int n){
	///base
	if(n==0){
		return 0;
	}

	//recursive
	int sa = toi(a,n-1)*10; 

	///cal
	return sa + (a[n-1] - '0');
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		char a[] = "12345";
		cout<<typeid(a).name()<<endl;
		int n;
		int s = toi(a,5);
		cout<<typeid(s).name()<<endl; ///to check the return type
		cout<<s<<endl;

		string z = "6789";
		int k = stoi(z); ///from string to integer stoi is used for whole string 
		cout<<typeid(k).name()<<endl;

		char *b;
		*b = 'c';
		int p = atoi(b); ///atoi is used for single characters or pointers
		//cout<<typeid(p).name()<<endl;
	return 0;
}
