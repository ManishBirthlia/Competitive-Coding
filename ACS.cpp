#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a;
	    b=(a/100)+a%100;
	    if(b<11)
	        cout<<(a/100)+a%100<<endl;
	    else
	        cout<<-1<<endl;
	}
	return 0;
}
