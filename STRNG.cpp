#include <iostream>
using namespace std;

int main() {
	long int t,a;
	int b=0,x=0;
	cin>>t;
	while(t--){
	    x=0;
	    cin>>a;
	    long long int c[a];
	    for(int i=0;i<a;i++){
	        cin>>c[i];
	    }
	    for(int i=0;i<a;i++){
	        b=0;
	        for(int j=2;j<c[i]/2;j++){
	            if(c[i]%j==0){
	                b++;
	            }
	        }
	        if(b==0){
	            x++;
	        }
	    }
	    cout<<a-x<<endl;
	}
	return 0;
}
