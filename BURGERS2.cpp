#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    int x=a*c,y=0;
	    if(x>d){
	        cout<<-1<<endl;
	    }else{
	        while(x+y<=d && x>=0 && y>=0){
	            x-=a;
	            y+=b;
	        }
	        x+=a;
	        y-=b;
	        cout<<x/a<<" "<<y/b<<endl;
	    }
	}
	return 0;
}
