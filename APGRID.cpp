#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    int x[a][b];
	    x[0][0]=1;
	    cout<<x[0][0]<<" ";
	    for(int i=0;i<a;i++){
	        if(i>0){
	            x[i][0]=x[i-1][0]+2;
	            cout<<x[i][0]<<" ";
	        }
	        for(int j=1;j<b;j++){
	            x[i][j]=x[i][j-1]+2*i+1;
	            if(j==b-1){
	                cout<<x[i][j]<<endl;
	            }else{
	                cout<<x[i][j]<<" ";
	            }
	        }
	    }
	}
	return 0;
}
