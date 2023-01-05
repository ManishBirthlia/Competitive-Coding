#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a*b>c){
	        cout<<(c/b)*(b*b)+(c%b)*(c%b)<<endl;
	    }else{
	        cout<<a*b*b<<endl;
	    }
	}
	return 0;
}
