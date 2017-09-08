#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter the 1st side";
  cin>>a;
  cout<<"enter the 2nd side";
  cin>>b;
  cout<<"enter the 3rd side";
  cin>>c;
  if ((a+b)>c && (b+c>a) && (a+c>b))
  cout<<"the triangle is valid";
  else
      cout<<"the triangle is not valid";
}
