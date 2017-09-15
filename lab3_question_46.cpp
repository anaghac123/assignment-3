#include <iostream>
using namespace std;

int main() {
    int m,n,c;
    cout<<"enter two numbers"<<endl;
    cin>>m>>n;
    c=m*n;
    while(m!=n)
    {
    	if(m>n)
    	{
    		m-=n;
    	}
    	else
    	{
    		n-=m;
    	}
     	
    }
    cout<<"LCM = "<<c/n;

	return 0;
}
