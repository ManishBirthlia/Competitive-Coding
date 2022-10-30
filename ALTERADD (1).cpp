#include <iostream>
using namespace std;

int main() {
	int t;
	long long int x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if((y-x)%3==0 || (y-x)%3==1){
	        cout <<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
