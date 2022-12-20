#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    long long int result=min(a,b);
    while(result>0)
    {
        if(a%result==0 && b%result==0)
        {
            break;
        }
        result--;
    }
    return result;
}

int main() {
	long long int t,a;
	cin>>t;
	while(t--){
	    int c=0,j;
	    cin>>a;
	    for(int i=1;i<a;i++){
	        j=a-i;
	        if(((i*j)/gcd(i,j)+gcd(i,j))==a){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
