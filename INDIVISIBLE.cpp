#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,i;
        cin>>a>>b>>c;
        for(i=1;i<100;i++){
            if(a%i!=0 && b%i!=0 && c%i!=0) break;
        }
        cout<<i<<endl;
    }
}