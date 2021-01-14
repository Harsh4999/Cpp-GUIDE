///print all the subsequent of the string that means print poewer set of the sring eg = "abc" OUTPUT = ["",a,b,c,ab,ac,bc,abc]
#include<bits/stdc++.h>
using namespace std;
void subsequent(string s,string out){
	///base
	if(s.length()==0){
		cout<<out<<endl; ///at end we print all the stored possiblity we come here repetedly and print out 
		return;
	}

	///recursive
	subsequent(s.substr(1),out); ///1 possiblity not including the char and excluding it
	subsequent(s.substr(1),out + s[0]); ///2 possiblity including the char
	return;
}
void subsequent1(string s,string out, vector<string> &v){
	if(s.length()==0){
		v.push_back(out); //here we arestoring the values instead of printing them
		return;
	}

	subsequent1(s.substr(1),out,v); ///1 possiblity not including the char and excluding it
	subsequent1(s.substr(1),out + s[0],v); ///2 possiblity including the char
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		string a = "abc";
		string o;
	//	subsequent(a,o);
		vector<string> v;
		subsequent1(a,o,v);
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<endl;
		}
	return 0;
}
