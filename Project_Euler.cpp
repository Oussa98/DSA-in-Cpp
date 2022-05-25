/*
  I want to be efficient at cpp, and I found this website called project Euler.
  so I will try to solve at least three or four problems per week.
  .
  According to project Euler, the first 100 problems can be shared,
  so these are my solutions to the first 100 problems.
  Enjoy and of course, feedback is more than welcome  
*/

//#####################################################################################################
/*
    If we list all the natural numbers below 10
    that are multiples of 3 or 5, we get 3, 5, 6 and 9.
    The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

using namespace std;

int main()
{
    int MAX = 1000;
    int c{0};
    
    for (int i = 0; i!=MAX; i++)
    {
        if (i%3 == 0 || i%5 == 0)
        {
            c+=i;
        };
        
    }
    cout << c;
}


//#####################################################

/*
	Each new term in the Fibonacci sequence is generated by adding the previous two terms.
	By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	By considering the terms in the Fibonacci sequence whose values do not exceed four million,

	find the sum of the even-valued terms.
*/


#include <iostream>

using namespace std;

int main()
{
    int MAX = 4000000;
    int a1 = 1;
    int a2 = 2;
    int s = 2;
    int r = 0;
    
    while(r < MAX)
    {
        r = a1 + a2;
        a1 = a2;
        a2 = r;
        if (a2%2==0)
        {
            s += a2;
        }
    }
    cout << s;
}   

//###########################################


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