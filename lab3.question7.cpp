#include<iostream>
using namespace std;
main()
{  char ch;
   cout<<"enter a charecter";
   cin>>ch;
   if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
     cout<<"this character is an alphabet";
   else
     cout<<"this character is not an alphabet";
}
