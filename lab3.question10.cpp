#include<iostream>
using namespace std;
main()
{  char c;
   cout<<"enter a charecter";
   cin>>c;
   if(c>=65 && c<=90)
     cout<<"this character is an uppercase alphabet";
   else if(c>=97 && c<=122)
     cout<<"this character is a lowercase alphabet";
}
