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
	        if(i>0 && a<=b){
	            x[i][0]=x[i-1][0]+a+1;
	            cout<<x[i][0]<<" ";
	        }else if(i>0&&a>b){
	            x[i][0]=x[i-1][0]+1;
	            cout<<x[i][0]<<" ";
	        }
	        for(int j=1;j<b;j++){
	            if(a<=b)
	                x[i][j]=x[i][j-1]+i+1;
	            else
	                x[i][j]=x[i][j-1]+i+b+1;
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
