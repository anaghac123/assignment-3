#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter the 1st angle";
  cin>>a;
  cout<<"enter the 2nd angle";
  cin>>b;
  cout<<"enter the 3rd angle";
  cin>>c;
  if (a+b+c==180)
  cout<<"the triangle is valid";
  else
      cout<<"the triangle is not valid";
}
