#include <iostream>
using namespace std;

int main() {
    int t;
    double x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int count=0;
	    while(x!=y){
	        if(x>y){
	            y+2;
	            count++;
	        }
	        else{
	            x++;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
