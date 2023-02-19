//Sum of Odd Integers

//Input 
/*
6
3 1
4 2
10 3
10 2
16 4
16 5
*/

//Output
/*
YES
YES
NO
YES
YES
NO
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t; cin>>t; while(t--){
		ll n,k;
		cin>>n>>k;

	 if(k*k<=n && n%2 == k%2){
		 cout<<"YES"<<endl;
	 }
	 else{
		 cout<<"NO"<<endl;
	 }

		
	}
}
