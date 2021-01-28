///using Moore voting algo Q) find majority element in an array eg: [3,3,2,2,3] ans = 3
///algo = take two variables 1)candidate = a[0] 2)count = 1 then sart iteration over the array from 1st element 
///rules = 1)if element is same as candidate then count++
///	       2)if element is not same as candidate then count--
///        3)if count == 0 then candidate = a[i] & count = 1
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int>& nums){
       int can=nums[0],con=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==can){
                con++;
            }else{
                con--;
                if(con==0){
                    can = nums[i];
                    con = 1;
                }
            }
        }

        return can;
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
		int ans = ob.majorityElement(v);
		cout<<ans;
	return 0;
}