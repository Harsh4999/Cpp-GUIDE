////valid paranthesis question string input = [{]} return false , [{()}] return true
#include<bits/stdc++.h>
using namespace std;
///rules 
///1) if any opening bracket found then simply push it
///2) if any closing bracket found then check top of the stack and if pair is matched then pop the top else return false
///3) Atlast after iterating over the string if the stack is empty then and then only the string is true and is balanced paranthesis else return false
///4) Only using 3 types of brackets 1 = () 2 = [] 3 = {}
bool validParanthesis(string a){
		stack<char> ob1;
		for(int i=0; i<a.length(); i++){
			if(a[i]=='{'|| a[i]=='[' ||a[i]=='('){
				ob1.push(a[i]);
				
			}else{
				///this condition is checked if our inout string consist of only closing paranthesis then what we will check and compare with as out stack will be amtty and we will get a runtime error
				if(ob1.empty()) return false; ///if not checked we get runtime error 
				if(a[i]=='}'){
					char temp = ob1.top();
					if(temp != '{'){
						return false;
					}else{
						ob1.pop();
					}
				}
				if(a[i]==']'){
					char temp1 = ob1.top();
					if(temp1 != '['){
						return false;
					}else{
						ob1.pop();
					}
				}
				if(a[i]==')'){
					char temp2 = ob1.top();
					if(temp2 != '('){
						return false;
					}else{
						ob1.pop();
					}
				}
			}
		}
		if(ob1.empty()){
			return true;
		}
		return false;
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		string a;
		cin>>a;
		if(validParanthesis(a)){
			cout<<"yes";
		}else{
			cout<<"no";
		}
	return 0;
}