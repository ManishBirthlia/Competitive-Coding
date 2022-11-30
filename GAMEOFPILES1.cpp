#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a;
	cin>>t;
	while(t--){
	    int count=0;
	    cin>>a;
	    int b[a];
	    for(int i=0;i<a;i++){
	        cin>>b[i];
	    }
	    int min=b[0];
	    for(int i=0;i<a;i++){
	        if(b[i]%2!=0){
	            count++;
	        }
	        if(b[i]<min){
	            min=b[i];
	        }
	    }
	    if(count%2!=0||min==1){
	        cout<<"CHEF"<<endl;
	    }else{
	        cout<<"CHEFINA"<<endl;
	    }
	}
	return 0;
}
