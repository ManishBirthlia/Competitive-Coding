#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	map<long long,long long>temp;
// 	map<long long,long long>mp;
	while(t--){
	    temp.clear();
	    int n;
	    cin>>n;
	    long long a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        temp[a[i]]=i;
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int count=0,pr;
	    for(auto it=temp.rbegin();it!=temp.rend();it++){
	        pr=1;
	        for(auto itr=temp.rbegin();itr!=temp.rend();itr++){
	            if(itr==it)break;
	            if(b[itr->second]>b[it->second]){
	                pr=0;
	                break;
	            }
	        }
	        if(pr==1){
	            count++;
	        }
	    }
	    // || down part gives TLE ||
	    /*temp.clear();
	    mp.clear();
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        temp[a[i]]=i;
	    }
	    int count=0;
	    for(auto it:temp){
	        mp[it.second]=count++;
	    }
	    temp.clear();
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        temp[b[i]]=i;
	    }
	    long long x,y;
	    for(auto it:temp){
	        for(auto itr:temp){
	            if(itr==it) break;
	            x=a[itr.second];
	            y=a[it.second];
	            if(x>y){
	                mp[it.second]++;
	            }
	        }
	    }
	    //  || down part is worng ||
	   // count=0;
	   // for(auto it:temp){
	   //     mp[it.second]+=count++;
	   //     if(mp[it.second]>n-1){
	   //         mp[it.second]=n-1;
	   //     }
	   // }
	    long long maxi=-1;
	    for(auto it:mp){
	        if(it.second>maxi){
	            maxi=it.second;
	        }
	    }
	    count=0;
	    for(auto it:mp){
	        if(it.second==maxi){
	            count++;
	        }
	    }*/
	    cout<<count<<endl;
	}
	return 0;
}
