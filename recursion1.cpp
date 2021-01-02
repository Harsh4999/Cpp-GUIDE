#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n < 0) return -1; //if n will be negative than we cannot find -ve factorial as it is not defined
	if(n == 0) return 1; //if n will be 0 we know that 0! = 1 so we return 1 to above functions
	int smallAns = n*fact(n-1); //we use recursion here to devide are big problem into smallAns eg = n! = n*(n-1)!
	return smallAns; //Atlast we return smallAns
}
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt","r+",stdin);
		freopen("output.txt","w+",stdout);
	#endif
		int n;
		cin>>n;     
		int result = fact(n);
		cout<<result;
		return 0
}

/*

								    CALL STACK
								    Eg fact(4);
       						                  |		  |
						                  |  fact(0)      |
                                                                  |  fact(1)      |
	                                                          |  fact(2)      |
                                                                  |  fact(3)      |
                                                                  |  fact(4)      |
                                                                  |  main()       |
                                                                  |---------------|
 */
