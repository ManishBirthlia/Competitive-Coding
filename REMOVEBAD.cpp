#include <iostream>
#include <map>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    map<int,int>mp;
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(mp.count(a[i])){
	            mp[a[i]]++;
	        }else{
	            mp[a[i]]=1;
	        }
	    }
	    int count=0;
	    for(auto it:mp){
	        if(it.second>count){
	            count=it.second;
	        }
	    }
	    cout<<n-count<<endl;
	}
	return 0;
}
