///remove all the consecutive characters eg aaabbbcda OUTPUT = abcda
#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char a[]){
	///base
	if(a[0]=='\0') return;

	///recursive
	if(a[0]==a[1]){
		for(int j=0;a[j]!='\0';j++){
			a[j]=a[j+1];
		}
		removeConsecutiveDuplicates(a); ///here we again start with same array and not array+1 we dont decrease the array 
	}else{
		removeConsecutiveDuplicates(a+1); ///here we change the array size as we are sure next character is diffrent from the current one
	}
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		char a[] = "aaabbbcda";
		removeConsecutiveDuplicates(a);
		cout<<a;
	return 0;
}
