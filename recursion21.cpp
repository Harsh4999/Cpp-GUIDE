///print all the permutations of a string eg ABC = [ACB,ABC,BCA,BAC,CAB,CBA] 3! = 6 possiblity
#include<bits/stdc++.h>
using namespace std;
void print_permutation(char a[],int i=0){
	///base
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}

	///recursive
	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		print_permutation(a,i+1);
		swap(a[i],a[j]);
	}
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		char a[] = "ABC";
		print_permutation(a)
;	return 0;
}
