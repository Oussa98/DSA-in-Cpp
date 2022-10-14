
//#######################################################
/*PROBLEM 5*/


/*
    can be divided by 1  ==> every integer;                                     ####
    can be divided by 2  ==> last digit is even (0,2,4,6,8);                    ####
    can be divided by 3  ==>
    can be divided by 4  ==> 
    can be divided by 5  ==> last digit must be either 0 or 5;                  ####
    can be divided by 6  ==> 
    can be divided by 7  ==>
    can be divided by 8  ==>
    can be divided by 9  ==>
    can be divided by 10 ==> last digit must be 0                              ####
    can be divided by 11 ==> 
    can be divided by 12 ==>
    can be divided by 13 ==> 
    can be divided by 14 ==>
    can be divided by 15 ==> either 15, 30, 45, 60, 75, 90, 105, 120,135, 150
    can be divided by 16 ==>
    can be divided by 17 ==>
    can be divided by 18 ==>
    can be divided by 19 ==>
    can be divided by 20 ==> last two digits must be multiplier of 20           ####
                             which means (00,20,40,60,80)
    
    
    
    our number must end with a zero
    our number must second digit from the end is either 0,2,4,6,8
	
	the number can be divided by 
    
    wait a min, if 2520 can be divided by numbers [1-10] 
    then its multipliers will be the same same
    
*/



/* 25 min*/
#include <iostream>

using namespace std;

int main()
{
    int number = 2520;
    int dividers_max = 10;
    
    for (int i=20; i<100000000; i++)
    {
        int r = i*2520;
        if (r%11 == 0 && r%12 == 0 &&  r%13 == 0 && r%14 == 0 && r%16 == 0 && r%17 == 0 && r%18 == 0 && r%19 == 0)
        {
            cout << r;
            break;
        }
    }

}
