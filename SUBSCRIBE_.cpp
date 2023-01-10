#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x%6==0){
	        cout<<(x/6)*y<<endl;
	    }else{
	        cout<<(x/6+1)*y<<endl;
	    }
	}
	return 0;
}
