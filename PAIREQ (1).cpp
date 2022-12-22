#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a;
	cin>>t;
	while(t--){
	    cin>>a;
	    int b;
	    int c=0,d=0;
	    vector<int>x;
	    for(int i=0;i<a;i++){
	        cin>>b;
	        x.push_back(b);
	    }
	    sort(x.begin(),x.end());
	    for(int i=0;i<a-1;i++){
	        
	        if(x[i]==x[i+1]){
	            c++;
	        }else{
	            ++c;
	            if(c>d){
	                d=c;
	            }
	            c=0;
	        }
	    }
	    c++;
	    if(c>d)
	        d=c;
	    cout<<a-d<<endl;
	}
	return 0;
}
