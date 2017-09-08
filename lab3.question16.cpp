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
  if ((a==b)&&(b==c))
     cout<<"the triangle is equilateral";
  else if((a==b)||(a==c)||(b==c))
     cout<<"the triangle is isocelus";
  else
     cout<<"the triangle is scaleme";  
}

