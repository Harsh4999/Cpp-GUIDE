///find the element occurence first and last in an sorted array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getindex(vector<int>& nums, int target,bool getfirst){
        int s=0;
        int e=nums.size()-1;
        int mid;
        int ans = -1;
        while(s<=e){
            mid = s + (e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                if(getfirst){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        int f=getindex(nums,target,true);
        if(f== -1){
            return v;
        }
        int l=getindex(nums,target,false);
        v[0]=f;
        v[1]=l;
        return v;
    }
};
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		class Solution ob;
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int key;
		cin>>key;
		vector<int> ans(2);
		ans = ob.searchRange(v,key);
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" "<<endl;
		}
	return 0;
}
