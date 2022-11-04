#include <iostream>
#include <map>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int even=0,odd=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]%2==0){
	            even++;
	        }else{
	            odd++;
	        }
	    }
	    int count=0;
	    if(odd==0 || even ==0){
	        cout<<0<<endl;
	    }else{
	        cout<<even<<endl;
	    }
	}
	return 0;
}