#include <iostream>
using namespace std;

int main() {
	int t,a,c,d;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>a;
	    int b[a];
	    for(int i=0;i<a;i++){
	        cin>>b[i];
	        c=c+b[i];
	    }
	    d=c/(a+1);
	    for(int i=0;i<a;i++){
	        b[i]=b[i]-d;
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
