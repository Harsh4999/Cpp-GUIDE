#include<bits/stdc++.h>
using namespace std;
int reversePolishMethod(vector<string> & a){
	stack<int> obj;
	for(int i=0;i<a.size();i++){
		cout<<a[i];
		if(a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/" || a[i] == "%"){
			int b = obj.top(); ///typecasting from char to int
			obj.pop();
			int c = obj.top();
			obj.pop();
			if(a[i] == "+") obj.push(b+c);
			if(a[i] == "-") obj.push(b-c);
			if(a[i] == "*") obj.push(b*c);
			if(a[i] == "/") obj.push(b/c);
			if(a[i] == "%") obj.push(b%c);
		}else{
			int d = (int)a[i];
			obj.push(d);
		}
	}
	return obj.top();
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		vector<string> v = {"2" , "1" , "+" , "4" , "*"};
		int ans = reversePolishMethod(v);
		cout<<ans;
	return 0;
}