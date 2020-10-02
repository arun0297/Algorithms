#include <bits/stdc++.h>      // updated
using namespace std;

#define lli long long int
#define pb push_back

int main() {
#ifndef ONLINE_JUDGE			//added
freopen("input.txt", "r", stdin);	//added
freopen("output.txt", "w", stdout);     //added
#endif				        //added
ios::sync_with_stdio(0);
cin.tie(0);
	int test;
	cin>>test;
	
	while(test--){
	    
	   int n,num, ans=0;
	   cin>>n;
	   set<int> s;
	   
	   for(int i=0;i<n;i++){
	     cin>>num;
	     if(num!=0)
	     s.insert(num);    
	   }
	   ans=s.size();          //updated
	   cout<<ans<<endl;   
	}
	return 0;
}
