#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    int c[n];
	    for(int i=0;i<n;i++){
	        c[i]=a[i]+b[n-1-i];
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        ans=max(ans,c[i]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
