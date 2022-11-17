#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(b>=a){
	        cout<<0<<endl;
	    }else if((a-b)%4==0){
	        cout<<(a-b)/4<<endl;
	    }else{
	        cout<<(a-b)/4+1<<endl;
	    }
	}
	return 0;
}
