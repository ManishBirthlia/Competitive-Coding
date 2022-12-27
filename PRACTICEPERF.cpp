#include <iostream>
using namespace std;

int main() {
	int c=0,a[4]={};
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	for(int i=0;i<4;i++){
	    if(a[i]>=10){
	        c++;
	    }
	}
	cout<<c;
	return 0;
}
