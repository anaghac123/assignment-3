#include <iostream>
using namespace std;

int main() {
  
    int num,  i;
 
    cout  <<  " Enter Any Number : ";
    cin >>  num;

    i  =  1;
    while(  i  <=  num  )
    {
        if( num % i == 0 )
        {
            int j = 1, k = 0;
            while( j  <=  i)
            {
                if( i % j == 0 )
                k++;
                j++;
            }
            if( k == 2 )
            cout  <<  i  << " Is A Prime Factor Of "  <<  num;
            cout  <<  "\n";
        }
        i++;
    }
	return 0;
}

