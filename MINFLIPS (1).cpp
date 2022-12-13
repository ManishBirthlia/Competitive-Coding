#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    int c=0;
	    char s[x-1];
	    cin>>s;
	    for(int i=0;i<x-1;i++){
	        if(s[i]!=s[i+1]){
	            c++;
	        }
	    }
	    if(s[x-2]==0){
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}