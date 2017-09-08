#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"enter a month number";
  cin>>a;
  if ((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12))
  cout<<"no of days in this month=31";
  if ((a==4)||(a==6)||(a==9)||(a==11))
     cout<<"no of days in this month=30";
  else if (a==2)
      cout<<"no of days in this month=28";
}
