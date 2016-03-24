#include<iostream>

using namespace std;

void maxHeap( int * a , int node, int length)
{
    int largest;
    int left = (2 * node) + 1;
    int right = left + 1;
    if( left < length && a[left] > a[node])
    {
        largest = left;
    }
    else
    {
        largest = node;
    }

    if( right < length && a[right] > a[largest] )
    {
        largest = right;
    }

    if( node != largest)
    {
        int temp = a[node];
        a[node] = a[largest];
        a[largest] = temp;
    }
    else
    {
        return;
    }
    
    maxHeap( a , largest , length);
}

void buildMaxHeap( int * a , int length)
{
    for ( int node =  (length/2) - 1; node >= 0 ; node--)
    {
        maxHeap ( a , node, length);
    }
}

void heapSort( int * a , int length)
{
    buildMaxHeap(a , length);
    for( int i = length - 1 ; i >= 1 ; i--)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        maxHeap( a , 0 , i);
    }
}

int main()
{
    int a[] = { 10, 20, 23, 123, 212, 13, 43, 319, 9 , 44, 0 , -12, 234};
    int n = (sizeof(a)/ int(sizeof (a[0])));
    cout<<"size is : " <<n<<endl;
    heapSort(a , n);
    cout<<"sorted : "<<endl;
    for( int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}
