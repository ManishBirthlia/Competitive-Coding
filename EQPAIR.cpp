#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	map<long long,long long> mp;
	cin>>t;
	while(t--){
	    long long count=0;
	    int n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(mp.count(a[i])){
	            mp[a[i]]++;
	        }else{
	            mp[a[i]]=1;
	        }
	    }
	    for(auto it:mp){
	       count+=((it.second-1)*(it.second))/2;
	    }
	    cout<<count<<endl;
	    mp.clear();
	}
	return 0;
}
