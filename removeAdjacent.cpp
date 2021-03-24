#include<bits/stdc++.h>
using namespace std;
string removeAdjacent(string s){
	stack<char> obj;
	for(int i=0; i<s.length();i++){
		if(obj.empty() || obj.top()!=s[i]){
			obj.push(s[i]);
		}else{
			obj.pop();
		}
	}
	string ans;
	while(!obj.empty()){
		ans.push_back(obj.top());
		obj.pop();
	}
	reverse(ans.begin(), ans.end());
	return ans;
}
string removeAdjacent1(string s){
	int *stptr = -1;
	for(int i=0;i<s.size();i++){
		if(stptr == -1 || s[i] != s[stptr]){
			stptr++;
			s[stptr] =s[i];
		}else stptr--;
	}
	string ans;
	for(int i=0;i<stptr;i++){
		ans.push_back(s[i]);
	}
	return ans;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		string s;
		cin>>s;
		string ans = removeAdjacent1(s);
		cout<<ans<<endl;
	return 0;
}