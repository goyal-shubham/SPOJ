
#include<iostream>
#include<stack>

using namespace std;

class queuell
{
    public:

    stack<int> newStack;
    stack<int> tempStack;
        
    void enqueue(int data)
    {
        newStack.push(data);
        cout<<"enqueue is OK"<<endl;
    }

    void dequeue()
    {
        while(!newStack.empty())
        {
            tempStack.push( newStack.top() );
            newStack.pop();
        }
        
        if(!tempStack.empty())
        {
            tempStack.pop();
        }

        while(!tempStack.empty())
        {
            newStack.push( tempStack.top());
            tempStack.pop();
        }
        cout<<"dequeue is OK"<<endl;
    }

    void stackPrint()
    {
        stack<int> myStack;
        cout<<"first loop"<<endl; 
        while(!newStack.empty())
        {
            cout<<newStack.top()<< " ";
            myStack.push( newStack.top() );
            newStack.pop();
        }   
        
        cout<<"second loop"<<endl; 
        while(!tempStack.empty())
        {
            newStack.push( tempStack.top());
            tempStack.pop();
        }
        cout<<"done second loop"<<endl; 
    }

};

int main()
{
    queuell * q = new queuell();
    q->enqueue(16);
    q->enqueue(20);
    q->enqueue(24);
    q->enqueue(30);
    q->enqueue(36);
    q->stackPrint();
    q->dequeue();
    q->stackPrint();
    q->dequeue();
    q->stackPrint();
    q->dequeue();
    q->enqueue(24);
    q->enqueue(30);
    q->stackPrint();
}

