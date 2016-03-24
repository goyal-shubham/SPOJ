#include<iostream>

using namespace std;

class node
{
    public:

    int data;
    node * prev;
    node * next;

    node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};


class queuell
{
    public:

    node * head;
    node * tail;

    queuell()
    {
        head = NULL;
        tail = NULL;
    }
    
    void printQueue()
    {
        if(head == NULL)
        {
            cout<<"no elements"<<endl;
        }
        else
        {
            node * temp = head;
            while(temp != NULL)
            {
                cout<<temp->data<<endl;
                temp = temp->next;
            }
        }
    }

    void enqueue(int data)
    {
        node * n = new node(data);
        if(head == NULL)
        { 
            head = n;
            tail = n;
        }
        else
        {
            n->prev = tail;
            tail->next = n;
            tail = n;
        }
    }

    void dequeue()
    {
        if(tail == NULL)
        {
            cout<<"no elements to dequeue";
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
        }
            
    }
};

int main()
{
    queuell * q = new queuell();
    q->printQueue();
    q->enqueue(16);
    q->enqueue(20);
    q->enqueue(24);
    q->enqueue(30);
    q->enqueue(36);
    q->printQueue();
    q->dequeue();
    q->printQueue();
    q->dequeue();
    q->printQueue();
    q->dequeue();
    q->enqueue(24);
    q->enqueue(30);
    q->printQueue();
}
