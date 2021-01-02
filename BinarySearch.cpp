#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int key){
	int s=0,e=n-1;  //Starting point and ending point 
	while(s<=e){ //find mid till s<=e if s>e then the key is not present in the array 
		int mid = s + (e-s)/2; //mid is (s+e)/2 but because of integer overflow risk we keep it s +(e-s)/2
		if(a[mid]==key){
			return mid; //Key found returning the index
		}else if(a[mid]>key){
			e = mid-1; //The key is smaller than the mid so decreasing end point towards left
		}else{
			s = mid+1; //The key is greater than the mid so increasing start point towards right
		}
	}
	return -1; //Key not found so returning invalid index
}
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n,key;
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cin>>key;
		sort(a,a+n); //Very important to sort the array first before binary search else it will not work
		int pos = binarySearch(a,n,key); //Calling the function it will return the index if key found else return -1
		if(pos == -1){
			cout<<"\nKey Not Found";
		}else{
			cout<<"\nKey Found At Index "<<pos;
		}
	return 0;
}
	