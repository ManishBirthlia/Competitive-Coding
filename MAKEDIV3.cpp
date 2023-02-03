#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        s+='1';
        cin>>n;
        for(int i=0;i<n-2;i++) s+='0';
        s+='5';
        if(n!=1) cout<<s<<endl;
        else cout<<"3"<<endl;
    }
}