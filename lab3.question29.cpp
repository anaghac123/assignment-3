#include<iostream>
using namespace std;
int main()
{  int n,i,s;
   cout<<"enter a number";
   cin>>n;
   s=0;
   for(i=1;i<=n;i+=2)
        s=s+i;
        cout<<s;
}
