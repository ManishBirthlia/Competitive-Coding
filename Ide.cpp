#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
      int t;
      cin>>t;
      while(t--){
            int n,i=0,idx_c=-1,idx_g=-1,ans=0;
            char c;
            string s;
            cin>>n>>c>>s;
            while(i<size(s)){
                if(idx_g==-1 &&  s[i]=='g') idx_g=i;
                if(s[i]==c && idx_c==-1){
                    idx_c=i;
                }
                if(s[i]=='g' && idx_c!=-1){
                    i-idx_c>ans?ans=i-idx_c:NULL;
                    idx_c=-1;
                }
                i++;
            }
            size(s)-idx_c+idx_g>ans && idx_c!=-1?ans=size(s)-idx_c+idx_g:NULL;
            cout<<ans<<endl;
      }
      return 0;
}
