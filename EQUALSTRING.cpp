#include <iostream>
#include <set>
using namespace std;

int main() {
	int t,x;
	string a,b;
	cin>>t;
	while(t--){
	    set<char>y;
	    cin>>x>>a>>b;
	    for(int i=0;i<x;i++){
	        if(a[i]!=b[i]){
	            y.insert(b[i]);
	        }
	    }
	    cout<<size(y)<<endl;
	}
	return 0;
}
