#include<iostream>

using namespace std;

class stackArray
{
    public:

    int a[1000];
    int top;

    stackArray()
    {
        top = -1;
    }
//complexity O(1)
    void push(int data)
    {
        if(top == -1)
        {
            top = 0;
            a[top] = data;
        }
        else
        {
            top = top + 1;
            a[top] = data;
        }
    }

//complexity - O(1)
    void pop()
    {
        if(top == -1)
        {
            return;
        }
        else
        {
            top = top - 1;
        }
    }
//complexity - O(n)
    void printStack()
    {
        int temp;
        for( temp = 0 ; temp<=top ; temp++)
        {
            cout<<a[temp]<<endl;
        }
    }
};

int main()
{
    stackArray s;
    s.push(16);
    s.push(20);
    s.push(24);
    s.printStack();
    s.pop();
    s.printStack();
    s.pop();
    s.push(30);
    s.printStack();
}
