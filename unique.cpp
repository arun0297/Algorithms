#include <iostream.h>
using namespace std;

#define lli long long int
#define pb push_back

int main() {
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
	   ans=s.length();
	   cout<<ans<<endl;   
	}
	return 0;
}
