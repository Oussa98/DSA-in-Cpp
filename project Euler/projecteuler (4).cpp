








#include <iostream>

using namespace std;


int main()
{
    int h,t,u,p; // hundert, ten, unit, palindrom
    bool cbon = false; // cest bon 
    /*
        a palindrom is symetrical so we can construct a palindrom of a three digit number 
        for exemple : 123 becomes 123321
        
    */
    for(int i = 999; i > 100; i--) 
    {
        
        if (cbon == true){break;} // after we find the largest number 
        
        h = i / 100; // get the hundert digit
        t = (i / 10) % 10; // get the middle digit
        u = i % 10; // get the unit digit
        
        p = i * 1000 + u * 100 + t  *10 + h; // construct the palindrom
        
        /*
            after we found the biggest palindrom, we start fractioning it (make it as in : abc * def)

        */
        for (int x = 100; x < 999; x++)
        {
            if (cbon == true){break;} // after we find the largest number
            if (p % x == 0) // if the palindrom is devidable by the "abc"
            {
                int y = p / x; // we try to find the "def" 
                if (y >= 100 && y <= 999) // this is to make sure it is in range (three digit only)
                {
                    cout << i << endl;
                    cout << "xxxxxxxxxxxx" << x << endl;
                    cout << "yyyyyyyyyyyy" << y << endl;
                    cbon = true; // to break the loop
                
                }
                
            }
        }
        
        
    }
    

    return 0;
}
