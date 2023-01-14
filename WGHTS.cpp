#include <iostream>
using namespace std;

int main() {
    int t,w,x,y,z;
    cin>>t;
    while(t--){
        cin>>w>>x>>y>>z;
        if(w==x || w==y || w==z || w==x+y ||w==x+z || w==y+z || w==x+z+y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
