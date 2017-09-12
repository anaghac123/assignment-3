#include<iostream>
using namespace std;
main()
{  int x;
   cout<<"enter a number";
   cin>>x;
   if((x%5)==0)
     cout<<"the number is devisible by 5 and";
   else
     cout<<"the number is not devisible by 5 and";
   if((x%11)==0)
     cout<<"the number is devisible by 11";
   else
     cout<<"the number is not devisible by 11";
}
