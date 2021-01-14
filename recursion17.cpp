///legnth of string & replace char & remove char
#include<bits/stdc++.h>
using namespace std;
int len(char a[]){
	///base
	if(a[0]=='\0') return 0;

	///recursive
	int sa = len(a+1);

	///calc
	return sa + 1;
}
///same function using string class
int len1(string a,int i){ 
	///base
	if(a[i]=='\0') return 0;

	///recursive
	int sa = len1(a,i+1);

	///calc
	return sa + 1;
}
void replaceChar(char a[]){  //no need to add & for reference as all arrays are passed by reference
	///base
	if(a[0]=='\0') return;

	///recursive
	if(a[0]=='a'){
		a[0]='x';
	}
	replaceChar(a+1);
}
void replaceChar1(string& a,int i){ ///note string are not by deafult passed by reference if not use & no effect on the string from the main
	///base
	if(a[i]=='\0') return;

	///recursion
	if(a[i]=='a'){
		a[i]='x';
	}
	replaceChar1(a,i+1);
}
void removeChar(char a[]){
	///base
	if(a[0]=='\0') return;

	///recursive
	if(a[0]!='a'){
		removeChar(a+1);
	}else{
		for(int i=0;a[i]!='\0';i++){
			a[i]=a[i+1];
		}
		removeChar(a);	
	}
}

int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		char a[] = "abcda";
		//cout<<len(a);
//		cout<<a<<"\n";
//		removeChar(a);
//		cout<<a;

		string s = "abcd";
//		cout<<len1(s,0);

//		replaceChar1(s,0);
		cout<<s;
	return 0;
}
