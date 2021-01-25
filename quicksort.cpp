//time complexity is O(nlog(n))
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e){
	int i=s,j=s,k=e-1;
	for(j=s;j<=e-2;j++){
		if(a[j]<a[k]){  ///if the element is lesser than the pivot element swap it with the i'th element 
			swap(a[j],a[i]);
			i++;
		}
	}
	swap(a[i],a[j]); ///finally at end we will have j at pivot element and we will swap j and i
	return i; ///return  pivot element position 
}
void quicksort(int a[],int s,int e){
	if(s>=e){
		return;
	}

	int p = partition(a,s,e); ///finding the pivot element position
	quicksort(a,s,p-1); ///braking the array from pivot point as pivot is correct place in array
	quicksort(a,p+1,e); ///2nd part of array
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		quicksort(a,0,n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	return 0;
}