#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int min=pow(10,6);
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
        }
        long long int price=0;
        for(int i=0;i<n;i++){
            if(a[i]!=min){
                price+=min*a[i];
            }
        }
        cout<<price<<endl;
    }
	return 0;
}
