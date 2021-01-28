#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<=nums[e]){
                if(target>=nums[mid] && target<=nums[e]){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
            if(nums[mid]>=nums[s]){
                if(target<=nums[mid]&&target>=nums[s]){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }
        }
        return -1;
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
		int k;
		cin>>k;
		int ans = ob.search(v,k);
		cout<<ans<<endl;
	return 0;
}