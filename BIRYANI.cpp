#include <iostream>
using namespace std;

class biryani{
    public:
    biryani(int a,int b){
        cout<<a*b<<endl;
    }
};

int main() {
    int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    //class type answer
	    biryani b11(a,b);
	    //small type answer
	    //cout<<a*b<<endl;
	}
	return 0;
}
