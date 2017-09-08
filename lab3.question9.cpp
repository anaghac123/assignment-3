#include<iostream>
using namespace std;
int main()
{
  char a;
  cout<<"enter a character";
  cin>>a;
  if (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
  cout<<"the charecter is an alphabet";
  else if ((a>='0')&&(a<='9'))
     cout<<"the character is a digit";
  else
      cout<<"this is a special character";
}
