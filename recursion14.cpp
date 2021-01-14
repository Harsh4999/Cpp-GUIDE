///store all the indexes of a element in an array
#include<bits/stdc++.h>
using namespace std;
void store(int a[],int n,int i,int k,vector<int> &ans){
	///base
	if(i==n) return ;

	///recursiv
	if(a[i]==k){
		ans.push_back(i);
	}
	store(a,n,i+1,k,ans);

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
		int k;
		cin>>k;
		int s=n;
		vector<int> v;
		store(a,n,0,k,v);
		if(v.size()==0) cout<<"No";
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
	return 0;
}
