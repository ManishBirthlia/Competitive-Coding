#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(b<=a){
	        cout<<b<<endl;
	    }else{
	        cout<<a<<endl;
	    }
	}
	return 0;
}
