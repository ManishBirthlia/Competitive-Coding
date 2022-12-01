#include <bits/stdc++.h>
using namespace std;

int main() {
	long int t,a;
	cin>>t;
	while(t--){
	    int count=0;
	    cin>>a;
	    long long int b[a];
	    for(int i=0;i<a;i++){
	        cin>>b[i];
	    }
	    int count2=0,c3=0;
	    for(int i=0;i<a;i++){
	        if(b[i]%2!=0){
	            count++;
	        }
	        if(b[i]==1 &&count2<2){
	            count2++;
	        }
	        if(b[i]==1){
	            c3++;
	        }
	    }
	    if(count%2!=0&&count2==0||count%2!=0&&count2==1||count%2==0&&(a-count)%2!=0&&count2==1||count2==2&&(count-c3)%2==0||count2==2&&(a-count)%2!=0){
	        cout<<"CHEF"<<endl;
	    }else{
	        cout<<"CHEFINA"<<endl;
	    }
	}
	return 0;
}
