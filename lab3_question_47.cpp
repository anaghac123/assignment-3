#include <iostream>
using namespace std;

int main() {
	 int num,rem,sum=0;
cout<<"Enter the num : "<<endl;
cin>>num;
while(num)
{
rem=num%10;
num=num/10;
sum=sum*10+rem;
}
cout<<"reverse is "<<sum;
    
	return 0;
}
