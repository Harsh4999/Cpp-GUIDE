///time complexity is O(nlog(n))
#include<bits/stdc++.h>
using namespace std;

void merge(int x[],int y[],int a[],int s,int e){
	int mid = (s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	while(i<=mid && j<=e){ ///applying mergesort on both arrays and making one final array
		if(x[i]<y[j]){
			a[k]=x[i];
			i++;
			k++;
		}else{
			a[k]=y[j];
			j++;
			k++;
		}
	}
	while(i<=mid){ //transfering remaining elements from x to a
		a[k]=x[i];
		k++;
		i++;
	}
	while(j<=e){ //transfering remaining elements from y to a
		a[k]=y[j];
		k++;
		j++;
	}
}
void mergesort(int a[],int s,int e){
	///base
	if(s>=e){ ///if s>e == length = 0 && if s=e == length = 1 therefore s>=e == length=0 || length = 1
		return;
	}

	int mid = (s+e)/2;  ///breaking the array 
	int x[100]; 
	for(int i=0;i<=mid;i++){ ///making a part of array
		x[i]=a[i];
	}
	int y[100];
	for(int i=mid+1;i<=e;i++){ ///making 2nd part of array
		y[i]=a[i];
	}
	mergesort(x,s,mid); ///applying mergesort on part1
	mergesort(y,mid+1,e); ///applying mergesort on part2 of array
	merge(x,y,a,s,e); ///finally merging both in final array
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
		mergesort(a,0,n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	return 0;
}