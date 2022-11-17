#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(y>x){
	        cout<<0<<endl;
	    }else if(x>=y){
	        cout<<x-y<<endl;
	    }
	}
	return 0;
}
