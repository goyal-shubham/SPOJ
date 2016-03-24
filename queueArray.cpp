#include<iostream>

using namespace std;

class queueArray
{
    public:

    int data[1000];
    int tail;
    int head;

    queueArray()
    {
        tail = 0;
        head = -1;
    }

    void enqueue( int key)
    {
        data[tail] = key;
        if(head == -1)
        {
            head = 0;
        }
        else if( tail == 999)
        {
            tail = 0;
        }
        else
        {
            tail++;
        }
    }

    void dequeue()
    {
        if(tail - head == 1)
        {
            tail = 0;
            head = -1;
        }
        else if ( head == 999)
        {
            head = 0;
        }
        else
        {
            head++;
        }
    }

    void print()
    {
        int temp;
        for ( temp = head; temp != tail; temp++)
        {
            cout<<data[temp]<<endl;
        }
    }
};

int main()
{
    queueArray q;
    q.enqueue(1);
    q.enqueue(23);
    q.print();
    q.dequeue();
    q.print();
}
