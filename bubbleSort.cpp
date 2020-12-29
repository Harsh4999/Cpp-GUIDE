#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n;
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n-1;i++){
			for(int j=0;j<=n-2;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	return 0;
}
