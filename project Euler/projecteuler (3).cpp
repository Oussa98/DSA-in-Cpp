//###########################################
/*PROBLEM 3*/

#include <iostream>
#include <math.h>

using namespace std;

long int isitprime(long int a)
{
    long int aa = sqrt(a);
    
    while (aa > 0)	
    {
        aa -= 1;       
        if (a%aa == 0)
        {
            long int aaa = aa;
            while(aaa>0)
            {
                aaa-=1;
                if (aa%aaa==0 && aaa!=1)
                {
                    break;
                }
                else if (aaa == 1)
                {
                    return aa;
                }
            }
        }
        
        
    }
}
int main()
{
    cout << isitprime(600851475143 ); 
}   

