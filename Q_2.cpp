#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    int price=0,i=0;
    while(k){
        k--;
        price+=p[i];
        i++;
    }
    cout<<price<<endl;
}
