#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a%5==0){
	        cout<<(a-b)/5<<endl;
	    }else{
	        if(b%5==0){
	            cout<<(a-b)/5+1<<endl;
	        }else{
	            if(a%5<b%5){
	                cout<<(a-b)/5+1<<endl;
	            }else{
	                cout<<(a-b)/5<<endl;
	            }
	        }
	    }
	}
	return 0;
}
