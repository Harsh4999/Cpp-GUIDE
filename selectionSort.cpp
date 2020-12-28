//Today we will sort the array in ascending order by selectionSort method
#include<bits/stdc++.h>
using namespace std;
vector<int> simplify(const vector<vector<int>>& matrix,int n,int m){ //simplify the 2d array tp 1d
    	int i,j;
    	vector<int> ans;
    	for(i=0;i<n;i++){
    		for(j=0;j<m;j++){
    			ans.push_back(matrix[i][j]);
    		}
    	}
    	return ans;

};

vector<int> selectionSort(vector<int> &a){
		int i,j,k,n;
		n=a.size();
		for(i=0; i<=n-2; i++){ //iterate through the whole vector<int> note:- we are not iterate to last element as it will always be sorted
			k = i; //making k at first equal to index main left hand side
			for(j=i+1; j<=n-1; j++){
				if(a[j]<a[k]){  // checking on the right hand side of the element which is smallest element soring it in k also recording its index
					k=j;
				}
			}

			if(a[k]<a[i]){  //comparing the k element with our main element on left hand side if its smaller than it then swap
				swap(a[i], a[k]);
			}
		}
		return a; //return the sorted vector<int> 
};


int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n,m;
		//sorting a 1d array
		
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){ //taking the input vector<int>
			cin>>a[i];
		}
		vector<int> b(n);
		b=selectionSort(a); //storing the sorted vector<int> into b
		for(int i=0;i<b.size();i++){ //printing the sorted vector<int>
		 	cout<<b[i]<<" ";
		}

		// Sorting a 2d array

		// cin>>n>>m; //enter row and column 
		// vector<vector<int>> a( n , vector<int> (m)); //creating a 2d vector with n row and m vectora 
		// for(int i=0;i<n;i++){ //taking input of 2d array
		// 	for(int j=0;j<m;j++){
		// 		cin>>a[i][j];
		// 	}
		// }
		// vector<int> b;
		// vector<int> c;
		// b=simplify(a,n,m); //storing a simplified 1d array into vecotr b
		// int s;
		// s=b.size();
		// c=selectionSort(b,s); //sorting b vector
		//  for(int i=0;i<c.size();i++){
		//  	cout<<c[i]<<" ";
		//  }
	return 0;
}
