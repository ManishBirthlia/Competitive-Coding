#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a>max(b,c)){
	        cout<<"Alice"<<endl;
	    }else if(b>max(a,c)){
	        cout<<"Bob"<<endl;
	    }else{
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
