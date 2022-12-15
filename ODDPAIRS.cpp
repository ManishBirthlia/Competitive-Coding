#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cout<<(n*n)/2<<endl;
        }else{
            cout<<2*(n/2*(n/2+1))<<endl;
        }
    }
	return 0;
}
