#include <iostream>
using namespace std;

int main() {
	int t;
	long long int x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    for(int i=1;i<1000000000;i++){
	        if(i%2==0){
	            x+=2;
	        }else{
	            x++;
	        }
	        
	        if(x>=y){
	            break;
	        }
	    }
	    if(x==y){
	        cout <<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
