#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int price=0;
        int s=0,e=n-1;
        while(s<e){
            price+=a[s]*a[e];
            s;
            e--;
        }
        cout<<price<<endl;
    }
	return 0;
}
