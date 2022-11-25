#include <iostream>
using namespace std;

int main() {
	int t,a;
	cin>>t;
	while(t--){
	    cin>>a;
	    char b[a+1];
	    cin>>b;
	    for(int i=0;i<=a;i++){
	        if(b[i]=='C'){
	            b[i]='G';
	        }else if(b[i]=='G'){
	            b[i]='C';
	        }else if(b[i]=='A'){
	            b[i]='T';
	        }else if(b[i]=='T'){
	            b[i]='A';
	        }
	    }
	    cout<<b<<endl;
	}
	return 0;
}
