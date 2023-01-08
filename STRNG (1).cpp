#include <iostream>
#include <numeric>
//#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long int t,a;
	long long int c;
	int s1;
	vector<long long int> b;
	int x,y;
	cin>>t;
	while(t--){
	    x=0;
	    cin>>a;
	    for(int i=0;i<a;i++){
	        cin>>c;
	        b.push_back(c);
	    }
	    sort(b.end(),b.begin());
	    y=b[1];
	    for(int i=0;i<a-1;i++){
	        y=gcd(y,b[i+1]);
	        if(y==1){
	            x++;
	            y=s1;
	        }
	        s1=y;
	    }
	    if(x==1){
	        cout<<1<<endl;
	    }else if(x>1){
	        cout<<0<<endl;
	    }else{
	        cout<<a<<endl;
	    }
    b.clear();
	}
	return 0;
}
