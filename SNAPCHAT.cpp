#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long ans=0,max=INT_MIN;
        for(int i=0;i<n;i++) if(b[i]>max) max=b[i];
        for(int i=0;i<n;i++) ans+=a[i];
        for(int i=0;i<n;i++) ans+=b[i];
        cout<<ans-max<<endl;
    }
}