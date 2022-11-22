#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a[n];
	    for(int i=0;i<size(s);i++){
	        if(s[i]=='L'){
	            a[i]=i;
	        }else{
	            a[i]=size(s)-1-i;
	        }
	    }
	    long long sum=0;
	    for(int i=0;i<n;i++){
	        sum+=a[i];
	    }
	    vector<long long>ans;
	    int start=0,end=n-1;
	    while(start<=end){
	        if(a[start]==start && start+end<=n-1){
	            sum+=n-1-a[start]-a[start];
	            start++;
	            ans.push_back(sum);
	        }else if(a[end]==n-1-end && start+end>n-1){
	            sum+=end-a[end];
	            end--;
	            ans.push_back(sum);
	        }else if(start+end<=n-1){
	            start++;
	        }else{
	            end--;
	        }
	    }
	    int sz=size(ans);
	    while(sz!=n){
	        ans.push_back(sum);
	        sz++;
	    }
	    sort(ans.begin(),ans.end());
	    for(int i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
