#include<iostream>
using namespace std;
main()
{  int x,y,z,max;
   cout<<"enter 1st number";
   cin>>x;
   cout<<"enter 2nd number";
   cin>>y;
   cout<<"enter 3rd number";
   cin>>z;
   if((x>=y)&& (x>=z))
     max=x;        
   else if((y>=x) && (y>=z))
     max=y;
   else
     max=z;
   cout<<"maximum is"<<max;
}
