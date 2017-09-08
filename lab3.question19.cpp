#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d,e,f,g;
  cout<<"enter marks in physics";
  cin>>g;
  cout<<"enter marks in chemistry";
  cin>>b;
  cout<<"enter marks in biology";
  cin>>c;
  cout<<"enter marks in mathematics";
  cin>>d;
  cout<<"enter marks in computer";
  cin>>e;
  cout<<"enter maximum marks that can be optained in a subject";
  cin>>f;
  a=(g+b+c+d+e)*100/(5*f);
  cout<<"the percentage of marks optained= "<<a;
  if (a>=90)
     cout<<"and grade is A";
  if ((a>=80)&&(a<90))
     cout<<"and grade is B";
  if ((a>=70)&&(a<80))
     cout<<"and grade is C";
  if ((a>=60)&&(a<70))
     cout<<"and grade is D";
  if ((a>=40)&&(a<60))
     cout<<" and grade is E";
  else if(a<40)
     cout<<"and grade is F";
}
