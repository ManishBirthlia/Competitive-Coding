#include <iostream>
using namespace std;

int main() {
	int x,y,a,b;
	cin>>x;
	while(x--){
	    cin>>y>>a>>b;
	    if(((y>a) && (y>b)) && (a>b)){
	        cout<<a<<endl;
	    }
	    else if(((y>a)&& (y>b)) && (b>a)){
	        cout<<b<<endl;
	    }
	        
	    if(((a>y) && (a>b)) && (y>b)){
	        cout<<y<<endl;
	    }
	    else if(((a>y) && (a>b)) && (b>y)){
	        cout<<b<<endl;
	    }
	        
	    if(((b>a) && (b>y)) && (a>y)){
	        cout<<a<<endl;
	    }
	    else if(((b>a) && (b>y)) && (y>a)){
	        cout<<y<<endl;
	    }
	}
	return 0;
}
