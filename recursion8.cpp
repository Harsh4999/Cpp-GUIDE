///In this we will check if the array is sorted help of recursion time complexity O(n)
#include<bits/stdc++.h>
using namespace std;
bool arraysort(int a[],int n){
	///base case
	if(n==0 || n==1) return true;

	///recursive curse
	if(a[0]>a[1]){
		return false;
	}
	bool sa = arraysort(a+1,n-1);

	///calc
	return sa;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int a[] = {1,2,3,8,5};
		int n = 5;
		if(arraysort(a,n)){
			cout<<"sorted";
		}else{
			cout<<"not sorted";
		}
	return 0;
}
