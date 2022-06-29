#include <iostream>

using namespace std;

struct mysteak // I was hungry, sorry.
{
    
    int top = -1;                   // top is the index of the last element of the stack
    int s[10];                      // s is the stack with 10 elements.

    
    
    // push will add (push) an element n on top of the stack
    void push(int n) 
    {
        if (top < 10)               // if the stack is not full
        {
            top++; 
            s[top] = n; 
        }
        else {cout << "the stack is full !!" << endl;}
    };
    
    
    // push will remove (pop) the last element on top of the stack
    void pop()
    {
        if (top >= 0 )              // if the stack is not empty
        {
            s[top] = 0;
            top--;
        }
        else {cout << "the stack is empty !!" << endl;}
    }
    
    
    // return the top index
    int topindex()
    {
        return top;
    }
    
    
    // return the top value
    int topvalue()
    {
        return s[top];
    }
    
    
    // check whether the stack is empty or not
    bool is_empty()
    {
        if (top == -1) return true;
        else return false;
    }
    
    
    // check whether the stack is full or not
    bool is_full()
    {
        if (top == 10) return true;
        else return false;
    }
    
};

int main()
{
    steak a; // making a stack
    a.push(113); // pushing an element
    a.pop(); //poping an element
  
    cout << a.topindex() << endl: // get the top index
    cout << a.topvalue() << endl: // get the top value
  
    cout << a.is_empty() << endl; // see if the stack is empty
    cout << a.is_full() << endl; // see if the stack is full


}
