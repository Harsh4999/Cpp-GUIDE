///tower of hanoi formulae 2^n - 1 
#include<bits/stdc++.h>
using namespace std;
int countsteps(int n){
	///base
	if(n==0) return 0;
	///recursive
	int sa = countsteps(n-1)+1+countsteps(n-1); ///first countsteps(n-1) moving A->B
												///second 1 = moving N to A->C
												///third countsteps(n-1) moving B->C

	///return
	return sa;
}
void printsteps(int n,char s,char h,char d){ ///s = source A , h = helper B , d = destination C
	///base
	if(n==0) return;

	///recursive
	printsteps(n-1,s,d,h);
	cout<<"MOVING "<<n<<" "<<s<<" "<<"TO "<<d<<endl;
	printsteps(n-1,h,s,d);
}
int main(){
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		//cout<<countsteps(4);
		printsteps(4,'A','B','C');
	return 0;
}

/*
A = source
B = Helper
C = Destination

 |    |		|
 |	  |		|
 |	  |		|
 |    |		|
---- ---- ------ 
  A   B     C      
  */