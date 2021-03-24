///inbuilt queue
#include<bits/stdc++.h>
using namespace std;
void rev(queue<int> &q){
	stack<int> obj;
	while(!q.empty()){
		obj.push(q.front());
		q.pop();
	}
	while(!obj.empty()){
		q.push(obj.top());
		obj.pop();
	}
	
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		queue<int> obj;
		/*obj.push(10);
		obj.push(10);
		obj.push(105);
		obj.push(103);
		obj.push(12);
		obj.pop();
		cout<<obj.front()<<endl;
		cout<<obj.size()<<endl;
		cout<<(obj.empty()?1:0)<<endl;*/
		for(int i=1;i<=5;i++){
			obj.push(i);
		}
		rev(obj);
		while(!obj.empty()){
			cout<<obj.front()<<endl;
			obj.pop();
		}
}